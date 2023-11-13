cmd_drivers/usb/host/ehci-pci.mod := printf '%s\n'   ehci-pci.o | awk '!x[$$0]++ { print("drivers/usb/host/"$$0) }' > drivers/usb/host/ehci-pci.mod
