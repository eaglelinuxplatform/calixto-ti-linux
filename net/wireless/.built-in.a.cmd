cmd_net/wireless/built-in.a := rm -f net/wireless/built-in.a;  printf "net/wireless/%s " wext-core.o wext-proc.o wext-spy.o | xargs arm-oe-linux-gnueabi-ar cDPrST net/wireless/built-in.a
