cmd_net/netfilter/nf_nat.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/nf_nat.ko net/netfilter/nf_nat.o net/netfilter/nf_nat.mod.o;  true
