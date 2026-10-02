/** Mondomatic */

#ifndef _HEAVY_LV2_DEARMONDO610_
#define _HEAVY_LV2_DEARMONDO610_

#include "DistrhoPlugin.hpp"
#include "DistrhoPluginInfo.h"
#include "Heavy_DeArmondo610.hpp"

START_NAMESPACE_DISTRHO

#define HV_DPF_NUM_PARAMETER 4

static void hvSendHookFunc(HeavyContextInterface *c, const char *sendName, uint32_t sendHash, const HvMessage *m);
static void hvPrintHookFunc(HeavyContextInterface *c, const char *printLabel, const char *msgString, const HvMessage *m);

class HeavyDPF_DeArmondo610 : public Plugin
{
public:
  enum Parameters
  {
      paramEmphasis,
      paramPedal,
      paramToneSweep,
      paramVolumeMin,
  };



  HeavyDPF_DeArmondo610();
  ~HeavyDPF_DeArmondo610() override;

  void handleMidiInput(uint32_t frames, const MidiEvent* midiEvents, uint32_t midiEventCount);
  void handleMidiSend(uint32_t sendHash, const HvMessage *m);
  void hostTransportEvents(uint32_t frames);
  void setOutputParameter(uint32_t sendHash, const HvMessage *m);

protected:
  // -------------------------------------------------------------------
  // Information

  const char* getLabel() const noexcept override
  {
    return "DeArmondo610";
  }
  const char* getDescription() const override
  {
    return "Rename Me";
  }

  const char* getMaker() const noexcept override
  {
    return "Mondomatic";

  }

  const char* getLicense() const noexcept override
  {
    return "ISC";

  }

  uint32_t getVersion() const noexcept override
  {
    return d_version(0, 0, 1);
  }

  int64_t getUniqueId() const noexcept override
  {
    return int64_t( 0x44EFDD97 );
  }

  // -------------------------------------------------------------------
  // Init

  void initParameter(uint32_t index, Parameter& parameter) override;
  

  // -------------------------------------------------------------------
  // Internal data

  float getParameterValue(uint32_t index) const override;
  void  setParameterValue(uint32_t index, float value) override;

  // -------------------------------------------------------------------
  // Process

  // void activate() override;
  // void deactivate() override;

#if DISTRHO_PLUGIN_WANT_MIDI_INPUT
  void run(const float** inputs, float** outputs, uint32_t frames, const MidiEvent* midiEvents, uint32_t midiEventCount) override;
#else
  void run(const float** inputs, float** outputs, uint32_t frames) override;
#endif

  // -------------------------------------------------------------------
  // Callbacks

  void sampleRateChanged(double newSampleRate) override;

  // -------------------------------------------------------------------

private:
  // parameters
  float _parameters[HV_DPF_NUM_PARAMETER];

  // transport values
  bool wasPlaying = false;
  double nextClockTick = 0.0;
  double sampleAtCycleStart = 0.0;

  // midi out buffer
  int midiOutCount;
  MidiEvent midiOutEvent;

  // heavy context
  HeavyContextInterface *_context;

  // HeavyDPF_DeArmondo610<float> fDeArmondo610;

  DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(HeavyDPF_DeArmondo610)
};

// -----------------------------------------------------------------------

END_NAMESPACE_DISTRHO

#endif // _HEAVY_LV2_DEARMONDO610_
