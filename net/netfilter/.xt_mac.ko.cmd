cmd_net/netfilter/xt_mac.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/xt_mac.ko net/netfilter/xt_mac.o net/netfilter/xt_mac.mod.o;  true
