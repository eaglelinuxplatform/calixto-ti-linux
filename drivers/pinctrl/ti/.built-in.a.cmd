cmd_drivers/pinctrl/ti/built-in.a := rm -f drivers/pinctrl/ti/built-in.a;  printf "drivers/pinctrl/ti/%s " pinctrl-ti-iodelay.o | xargs arm-oe-linux-gnueabi-ar cDPrST drivers/pinctrl/ti/built-in.a
