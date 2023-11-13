cmd_drivers/usb/built-in.a := rm -f drivers/usb/built-in.a;  printf "drivers/usb/%s " phy/built-in.a host/built-in.a | xargs arm-oe-linux-gnueabi-ar cDPrST drivers/usb/built-in.a
