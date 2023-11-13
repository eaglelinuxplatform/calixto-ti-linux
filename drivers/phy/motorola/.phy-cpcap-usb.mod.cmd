cmd_drivers/phy/motorola/phy-cpcap-usb.mod := printf '%s\n'   phy-cpcap-usb.o | awk '!x[$$0]++ { print("drivers/phy/motorola/"$$0) }' > drivers/phy/motorola/phy-cpcap-usb.mod
