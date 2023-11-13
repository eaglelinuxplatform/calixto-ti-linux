cmd_drivers/usb/dwc3/dwc3.mod := printf '%s\n'   core.o trace.o host.o gadget.o ep0.o drd.o debugfs.o | awk '!x[$$0]++ { print("drivers/usb/dwc3/"$$0) }' > drivers/usb/dwc3/dwc3.mod
