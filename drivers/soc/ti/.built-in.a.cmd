cmd_drivers/soc/ti/built-in.a := rm -f drivers/soc/ti/built-in.a;  printf "drivers/soc/ti/%s " omap_prm.o smartreflex.o | xargs arm-oe-linux-gnueabi-ar cDPrST drivers/soc/ti/built-in.a
