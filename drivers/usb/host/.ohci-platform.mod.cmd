cmd_drivers/usb/host/ohci-platform.mod := printf '%s\n'   ohci-platform.o | awk '!x[$$0]++ { print("drivers/usb/host/"$$0) }' > drivers/usb/host/ohci-platform.mod
