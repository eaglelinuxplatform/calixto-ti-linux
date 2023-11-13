cmd_drivers/spi/built-in.a := rm -f drivers/spi/built-in.a;  printf "drivers/spi/%s " spi.o spi-mem.o spi-omap2-mcspi.o | xargs arm-oe-linux-gnueabi-ar cDPrST drivers/spi/built-in.a
