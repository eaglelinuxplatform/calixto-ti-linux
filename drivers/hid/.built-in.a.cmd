cmd_drivers/hid/built-in.a := rm -f drivers/hid/built-in.a;  printf "drivers/hid/%s " hid-core.o hid-input.o hid-quirks.o hid-debug.o | xargs arm-oe-linux-gnueabi-ar cDPrST drivers/hid/built-in.a
