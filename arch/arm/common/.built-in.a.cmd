cmd_arch/arm/common/built-in.a := rm -f arch/arm/common/built-in.a;  printf "arch/arm/common/%s " firmware.o secure_cntvoff.o | xargs arm-oe-linux-gnueabi-ar cDPrST arch/arm/common/built-in.a
