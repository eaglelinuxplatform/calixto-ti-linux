cmd_drivers/hid/usbhid/usbkbd.mod := printf '%s\n'   usbkbd.o | awk '!x[$$0]++ { print("drivers/hid/usbhid/"$$0) }' > drivers/hid/usbhid/usbkbd.mod
