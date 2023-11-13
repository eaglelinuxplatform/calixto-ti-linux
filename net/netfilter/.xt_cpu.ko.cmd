cmd_net/netfilter/xt_cpu.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/xt_cpu.ko net/netfilter/xt_cpu.o net/netfilter/xt_cpu.mod.o;  true
