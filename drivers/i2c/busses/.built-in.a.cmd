cmd_drivers/i2c/busses/built-in.a := rm -f drivers/i2c/busses/built-in.a;  printf "drivers/i2c/busses/%s " i2c-omap.o | xargs arm-oe-linux-gnueabi-ar cDPrST drivers/i2c/busses/built-in.a
