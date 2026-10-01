/** Mondomatic */

#include "Heavy_DeArmondo610.h"
#include "HeavyDPF_DeArmondo610.hpp"
#include <set>



#define HV_HASH_NOTEIN          0x67E37CA3
#define HV_HASH_CTLIN           0x41BE0f9C
#define HV_HASH_POLYTOUCHIN     0xBC530F59
#define HV_HASH_PGMIN           0x2E1EA03D
#define HV_HASH_TOUCHIN         0x553925BD
#define HV_HASH_BENDIN          0x3083F0F7
#define HV_HASH_MIDIIN          0x149631bE
#define HV_HASH_MIDIREALTIMEIN  0x6FFF0BCF

#define HV_HASH_NOTEOUT         0xD1D4AC2
#define HV_HASH_CTLOUT          0xE5e2A040
#define HV_HASH_POLYTOUCHOUT    0xD5ACA9D1
#define HV_HASH_PGMOUT          0x8753E39E
#define HV_HASH_TOUCHOUT        0x476D4387
#define HV_HASH_BENDOUT         0xE8458013
#define HV_HASH_MIDIOUT         0x6511DE55
#define HV_HASH_MIDIOUTPORT     0x165707E4

#define MIDI_RT_CLOCK           0xF8
#define MIDI_RT_START           0xFA
#define MIDI_RT_CONTINUE        0xFB
#define MIDI_RT_STOP            0xFC
#define MIDI_RT_ACTIVESENSE     0xFE
#define MIDI_RT_RESET           0xFF

#define HV_HASH_DPF_BPM         0xDF8C2721

// midi realtime messages
std::set<int> mrtSet {
  MIDI_RT_CLOCK,
  MIDI_RT_START,
  MIDI_RT_CONTINUE,
  MIDI_RT_STOP,
  MIDI_RT_RESET
};


START_NAMESPACE_DISTRHO


// -------------------------------------------------------------------
// Heavy Send and Print hooks

static void hvSendHookFunc(HeavyContextInterface *c, const char *sendName, uint32_t sendHash, const HvMessage *m)
{
  HeavyDPF_DeArmondo610* plugin = (HeavyDPF_DeArmondo610*)c->getUserData();
  if (plugin != nullptr)
  {
    plugin->setOutputParameter(sendHash, m);
  }
}

static void hvPrintHookFunc(HeavyContextInterface *c, const char *printLabel, const char *msgString, const HvMessage *m)
{
  char buf[64];
  char* dst = buf;
  int len = strnlen(printLabel, 48);
  dst = strncpy(dst, printLabel, len);
  dst = strcpy(dst, " ");
  dst = strncpy(dst, msgString, 63-len);
  printf("> %s \n", buf);
}

// -------------------------------------------------------------------
// Main DPF plugin class

HeavyDPF_DeArmondo610::HeavyDPF_DeArmondo610()
 : Plugin(HV_DPF_NUM_PARAMETER, 0, 0)
{
  
  _parameters[0] = 1.0f;
  _parameters[1] = 0.0f;
  _parameters[2] = 1.0f;

  _context = hv_DeArmondo610_new_with_options(getSampleRate(), 10, 3, 2);
  _context->setUserData(this);
  _context->setSendHook(&hvSendHookFunc);
  _context->setPrintHook(&hvPrintHookFunc);

  
  // ensure that the new context has the current parameters
  for (int i = 0; i < HV_DPF_NUM_PARAMETER; ++i) {
    setParameterValue(i, _parameters[i]);
  }
}

HeavyDPF_DeArmondo610::~HeavyDPF_DeArmondo610() {
  hv_DeArmondo610_free(_context);
}

void HeavyDPF_DeArmondo610::initParameter(uint32_t index, Parameter& parameter)
{// initialise parameters with defaults
  switch (index)
  {
    
      case paramEmphasis:
        parameter.name = "Emphasis";
        parameter.symbol = "emphasis";
        parameter.hints = kParameterIsAutomatable
        | kParameterIsBoolean;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 1.0f;
        parameter.ranges.def = 1.0f;
        break;
    
      case paramOffset:
        parameter.name = "Offset";
        parameter.symbol = "offset";
        parameter.hints = kParameterIsAutomatable;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 1.0f;
        parameter.ranges.def = 0.0f;
        break;
    
      case paramPedal:
        parameter.name = "Pedal";
        parameter.symbol = "pedal";
        parameter.hints = kParameterIsAutomatable;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 1.0f;
        parameter.ranges.def = 1.0f;
        break;
    }
  
}

// -------------------------------------------------------------------
// Internal data

float HeavyDPF_DeArmondo610::getParameterValue(uint32_t index) const
{
  return _parameters[index];
  
}

void HeavyDPF_DeArmondo610::setParameterValue(uint32_t index, float value)
{
  switch (index) {
    case 0: {
      _context->sendFloatToReceiver(
        Heavy_DeArmondo610::Parameter::In::EMPHASIS,
        value);
      break;
    }
    
    case 1: {
      _context->sendFloatToReceiver(
        Heavy_DeArmondo610::Parameter::In::OFFSET,
        value);
      break;
    }
    
    case 2: {
      _context->sendFloatToReceiver(
        Heavy_DeArmondo610::Parameter::In::PEDAL,
        value);
      break;
    }
    
    default: return;
  }
  _parameters[index] = value;
  
}

void HeavyDPF_DeArmondo610::setOutputParameter(uint32_t sendHash, const HvMessage *m)
{
}


// -------------------------------------------------------------------
// Process

// void HeavyDPF_DeArmondo610::activate()
// {

// }

// void HeavyDPF_DeArmondo610::deactivate()
// {

// }

// -------------------------------------------------------------------
// Host Transport Events handler

void HeavyDPF_DeArmondo610::hostTransportEvents(uint32_t frames)
{
  // Realtime events
  const TimePosition& timePos(getTimePosition());
  bool reset = false;

  if (timePos.playing)
  {
    if (timePos.frame == 0)
    {
      _context->sendMessageToReceiverV(HV_HASH_MIDIREALTIMEIN, 0,
        "ff", (float) MIDI_RT_RESET, 0.0);
      reset = true;
    }

    if (! this->wasPlaying)
    {
      if (timePos.frame == 0)
      {
        _context->sendMessageToReceiverV(HV_HASH_MIDIREALTIMEIN, 0,
          "ff", (float) MIDI_RT_START, 0.0);
      }
      if (! reset)
      {
        _context->sendMessageToReceiverV(HV_HASH_MIDIREALTIMEIN, 0,
          "ff", (float) MIDI_RT_CONTINUE, 0.0);
      }
    }
  }
  else if (this->wasPlaying)
  {
    _context->sendMessageToReceiverV(HV_HASH_MIDIREALTIMEIN, 0,
      "ff", (float) MIDI_RT_STOP, 0.0);
  }
  this->wasPlaying = timePos.playing;

  // sending clock ticks
  if (timePos.playing && timePos.bbt.valid)
  {
    float samplesPerBeat = 60 * getSampleRate() / timePos.bbt.beatsPerMinute;
    float samplesPerTick = samplesPerBeat / 24.0;

    /* get state */
    double nextClockTick = this->nextClockTick;
    double sampleAtCycleStart = this->sampleAtCycleStart;
    double sampleAtCycleEnd = sampleAtCycleStart + frames;

    if (nextClockTick >= 0 && sampleAtCycleStart >= 0 && sampleAtCycleEnd > sampleAtCycleStart) {
      while (nextClockTick < sampleAtCycleEnd) {
        double delayMs = 1000*(nextClockTick - sampleAtCycleStart)/getSampleRate();
        if (delayMs >= 0.0) {
          _context->sendMessageToReceiverV(HV_HASH_MIDIREALTIMEIN, delayMs,
            "ff", (float) MIDI_RT_CLOCK, 0.0);
        }
        nextClockTick += samplesPerTick;
      }
    }

    /* save variables for next cycle */
    this->sampleAtCycleStart = sampleAtCycleEnd;
    this->nextClockTick = nextClockTick;
  }
}


// -------------------------------------------------------------------
// DPF Plugin run() loop

#if DISTRHO_PLUGIN_WANT_MIDI_INPUT
void HeavyDPF_DeArmondo610::run(const float** inputs, float** outputs, uint32_t frames, const MidiEvent* midiEvents, uint32_t midiEventCount)
{
  handleMidiInput(frames, midiEvents, midiEventCount);
#else
void HeavyDPF_DeArmondo610::run(const float** inputs, float** outputs, uint32_t frames)
{
#endif
  hostTransportEvents(frames);

  const TimePosition& timePos(getTimePosition());
  if (timePos.bbt.valid)
    _context->sendMessageToReceiverV(HV_HASH_DPF_BPM, 0, "f", timePos.bbt.beatsPerMinute);

  _context->process((float**)inputs, outputs, frames);
}

// -------------------------------------------------------------------
// Callbacks

void HeavyDPF_DeArmondo610::sampleRateChanged(double newSampleRate)
{
  hv_DeArmondo610_free(_context);

  _context = hv_DeArmondo610_new_with_options(getSampleRate(), 10, 3, 2);
  _context->setUserData(this);
  _context->setSendHook(&hvSendHookFunc);
  _context->setPrintHook(&hvPrintHookFunc);

  // ensure that the new context has the current parameters
  for (int i = 0; i < HV_DPF_NUM_PARAMETER; ++i) {
    setParameterValue(i, _parameters[i]);
  }
}


// -----------------------------------------------------------------------
/* Plugin entry point, called by DPF to create a new plugin instance. */

Plugin* createPlugin()
{
    return new HeavyDPF_DeArmondo610();
}

// -----------------------------------------------------------------------

END_NAMESPACE_DISTRHO