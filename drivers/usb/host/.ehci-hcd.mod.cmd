cmd_drivers/usb/host/ehci-hcd.mod := printf '%s\n'   ehci-hcd.o | awk '!x[$$0]++ { print("drivers/usb/host/"$$0) }' > drivers/usb/host/ehci-hcd.mod
