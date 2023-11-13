cmd_drivers/usb/phy/phy-twl6030-usb.mod := printf '%s\n'   phy-twl6030-usb.o | awk '!x[$$0]++ { print("drivers/usb/phy/"$$0) }' > drivers/usb/phy/phy-twl6030-usb.mod
