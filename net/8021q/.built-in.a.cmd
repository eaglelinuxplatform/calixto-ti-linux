cmd_net/8021q/built-in.a := rm -f net/8021q/built-in.a;  printf "net/8021q/%s " vlan_core.o | xargs arm-oe-linux-gnueabi-ar cDPrST net/8021q/built-in.a
