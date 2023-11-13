cmd_net/switchdev/built-in.a := rm -f net/switchdev/built-in.a;  printf "net/switchdev/%s " switchdev.o | xargs arm-oe-linux-gnueabi-ar cDPrST net/switchdev/built-in.a
