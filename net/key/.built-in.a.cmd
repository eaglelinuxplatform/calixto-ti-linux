cmd_net/key/built-in.a := rm -f net/key/built-in.a;  printf "net/key/%s " af_key.o | xargs arm-oe-linux-gnueabi-ar cDPrST net/key/built-in.a
