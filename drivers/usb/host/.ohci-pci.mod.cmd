cmd_drivers/usb/host/ohci-pci.mod := printf '%s\n'   ohci-pci.o | awk '!x[$$0]++ { print("drivers/usb/host/"$$0) }' > drivers/usb/host/ohci-pci.mod
