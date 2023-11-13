cmd_drivers/mmc/built-in.a := rm -f drivers/mmc/built-in.a;  printf "drivers/mmc/%s " core/built-in.a host/built-in.a | xargs arm-oe-linux-gnueabi-ar cDPrST drivers/mmc/built-in.a
