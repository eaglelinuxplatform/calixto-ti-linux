cmd_drivers/phy/ti/phy-twl4030-usb.mod := printf '%s\n'   phy-twl4030-usb.o | awk '!x[$$0]++ { print("drivers/phy/ti/"$$0) }' > drivers/phy/ti/phy-twl4030-usb.mod
