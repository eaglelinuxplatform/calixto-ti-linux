cmd_drivers/usb/phy/phy-am335x.mod := printf '%s\n'   phy-am335x.o | awk '!x[$$0]++ { print("drivers/usb/phy/"$$0) }' > drivers/usb/phy/phy-am335x.mod
