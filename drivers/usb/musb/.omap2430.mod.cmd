cmd_drivers/usb/musb/omap2430.mod := printf '%s\n'   omap2430.o | awk '!x[$$0]++ { print("drivers/usb/musb/"$$0) }' > drivers/usb/musb/omap2430.mod
