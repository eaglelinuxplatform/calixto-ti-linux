cmd_drivers/usb/phy/built-in.a := rm -f drivers/usb/phy/built-in.a;  printf "drivers/usb/phy/%s " phy.o of.o | xargs arm-oe-linux-gnueabi-ar cDPrST drivers/usb/phy/built-in.a
