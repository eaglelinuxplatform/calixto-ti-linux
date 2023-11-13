cmd_drivers/usb/roles/roles.mod := printf '%s\n'   class.o | awk '!x[$$0]++ { print("drivers/usb/roles/"$$0) }' > drivers/usb/roles/roles.mod
