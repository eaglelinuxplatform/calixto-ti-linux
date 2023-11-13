cmd_drivers/usb/host/ehci-omap.mod := printf '%s\n'   ehci-omap.o | awk '!x[$$0]++ { print("drivers/usb/host/"$$0) }' > drivers/usb/host/ehci-omap.mod
