cmd_drivers/hid/usbhid/usbmouse.mod := printf '%s\n'   usbmouse.o | awk '!x[$$0]++ { print("drivers/hid/usbhid/"$$0) }' > drivers/hid/usbhid/usbmouse.mod
