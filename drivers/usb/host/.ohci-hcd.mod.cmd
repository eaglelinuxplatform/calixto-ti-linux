cmd_drivers/usb/host/ohci-hcd.mod := printf '%s\n'   ohci-hcd.o | awk '!x[$$0]++ { print("drivers/usb/host/"$$0) }' > drivers/usb/host/ohci-hcd.mod
