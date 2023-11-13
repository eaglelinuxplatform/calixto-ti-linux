cmd_drivers/usb/musb/tusb6010.mod := printf '%s\n'   tusb6010.o | awk '!x[$$0]++ { print("drivers/usb/musb/"$$0) }' > drivers/usb/musb/tusb6010.mod
