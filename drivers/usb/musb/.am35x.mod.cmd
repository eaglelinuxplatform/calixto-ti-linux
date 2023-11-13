cmd_drivers/usb/musb/am35x.mod := printf '%s\n'   am35x.o | awk '!x[$$0]++ { print("drivers/usb/musb/"$$0) }' > drivers/usb/musb/am35x.mod
