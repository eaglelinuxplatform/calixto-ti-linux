cmd_drivers/usb/dwc3/dwc3-haps.mod := printf '%s\n'   dwc3-haps.o | awk '!x[$$0]++ { print("drivers/usb/dwc3/"$$0) }' > drivers/usb/dwc3/dwc3-haps.mod
