cmd_net/netfilter/xt_LOG.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/xt_LOG.ko net/netfilter/xt_LOG.o net/netfilter/xt_LOG.mod.o;  true
