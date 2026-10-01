DEARMONDO610_VERSION = 610b28111fd3b7b8e386cdfa45bc048c1acd4073
DEARMONDO610_SITE = https://github.com/Mondomod/dearmondo610
DEARMONDO610_SITE_METHOD = git

DEARMONDO610_DEPENDENCIES = lv2
DEARMONDO610_BUNDLES = Dearmondo610.lv2




define DEARMONDO610_BUILD_CMDS
	$(TARGET_MAKE_ENV) $(MAKE) -C $(@D)/plugin/source \
		CC="$(TARGET_CC)" \
		CXX="$(TARGET_CXX)" \
		AR="$(TARGET_AR)" \
		STRIP="$(TARGET_STRIP)" \
		CROSS_COMPILING=true \
		all

	cp -a $(@D)/lv2/. $(@D)/bin/Dearmondo610.lv2/
endef

define DEARMONDO610_INSTALL_TARGET_CMDS
	$(INSTALL) -d $(TARGET_DIR)/usr/lib/lv2

	cp -a $(@D)/bin/Dearmondo610.lv2 \
		$(TARGET_DIR)/usr/lib/lv2/
endef

$(eval $(generic-package))
