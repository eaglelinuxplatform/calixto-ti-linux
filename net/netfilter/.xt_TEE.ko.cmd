cmd_net/netfilter/xt_TEE.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/xt_TEE.ko net/netfilter/xt_TEE.o net/netfilter/xt_TEE.mod.o;  true
