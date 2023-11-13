cmd_drivers/usb/host/built-in.a := rm -f drivers/usb/host/built-in.a;  printf "drivers/usb/host/%s " pci-quirks.o | xargs arm-oe-linux-gnueabi-ar cDPrST drivers/usb/host/built-in.a
