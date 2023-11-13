cmd_arch/arm/vdso/built-in.a := rm -f arch/arm/vdso/built-in.a;  printf "arch/arm/vdso/%s " vdso.o | xargs arm-oe-linux-gnueabi-ar cDPrST arch/arm/vdso/built-in.a
