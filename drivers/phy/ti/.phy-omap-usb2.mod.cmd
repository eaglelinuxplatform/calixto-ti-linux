cmd_drivers/phy/ti/phy-omap-usb2.mod := printf '%s\n'   phy-omap-usb2.o | awk '!x[$$0]++ { print("drivers/phy/ti/"$$0) }' > drivers/phy/ti/phy-omap-usb2.mod
