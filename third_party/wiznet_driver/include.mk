TARGET_WIZNET_DRIVER_PATH = $(WIZNET_DRIVER_MODULE_PATH)

INCLUDE_DIRS += $(WIZNET_DRIVER_MODULE_PATH)/wiznet_driver/Ethernet

ifneq ("$(PLATFORM_WIZNET)","")
CFLAGS += -D_WIZCHIP_=$(PLATFORM_WIZNET)
endif
