cmd_net/netfilter/xt_u32.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/xt_u32.ko net/netfilter/xt_u32.o net/netfilter/xt_u32.mod.o;  true
