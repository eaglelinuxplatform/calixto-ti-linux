cmd_drivers/phy/ti/phy-dm816x-usb.mod := printf '%s\n'   phy-dm816x-usb.o | awk '!x[$$0]++ { print("drivers/phy/ti/"$$0) }' > drivers/phy/ti/phy-dm816x-usb.mod
