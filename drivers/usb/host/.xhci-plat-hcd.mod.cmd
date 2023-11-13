cmd_drivers/usb/host/xhci-plat-hcd.mod := printf '%s\n'   xhci-plat.o | awk '!x[$$0]++ { print("drivers/usb/host/"$$0) }' > drivers/usb/host/xhci-plat-hcd.mod
