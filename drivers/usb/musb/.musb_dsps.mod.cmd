cmd_drivers/usb/musb/musb_dsps.mod := printf '%s\n'   musb_dsps.o | awk '!x[$$0]++ { print("drivers/usb/musb/"$$0) }' > drivers/usb/musb/musb_dsps.mod
