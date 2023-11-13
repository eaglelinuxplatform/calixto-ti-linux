cmd_drivers/soc/bcm/built-in.a := rm -f drivers/soc/bcm/built-in.a;  printf "drivers/soc/bcm/%s " bcm63xx/built-in.a | xargs arm-oe-linux-gnueabi-ar cDPrST drivers/soc/bcm/built-in.a
