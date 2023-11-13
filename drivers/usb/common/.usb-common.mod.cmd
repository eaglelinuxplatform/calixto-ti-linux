cmd_drivers/usb/common/usb-common.mod := printf '%s\n'   common.o debug.o | awk '!x[$$0]++ { print("drivers/usb/common/"$$0) }' > drivers/usb/common/usb-common.mod
