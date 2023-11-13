cmd_net/netfilter/xt_nat.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/xt_nat.ko net/netfilter/xt_nat.o net/netfilter/xt_nat.mod.o;  true
