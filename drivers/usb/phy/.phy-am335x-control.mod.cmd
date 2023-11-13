cmd_drivers/usb/phy/phy-am335x-control.mod := printf '%s\n'   phy-am335x-control.o | awk '!x[$$0]++ { print("drivers/usb/phy/"$$0) }' > drivers/usb/phy/phy-am335x-control.mod
