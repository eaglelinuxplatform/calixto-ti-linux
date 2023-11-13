cmd_net/llc/llc.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/llc/llc.ko net/llc/llc.o net/llc/llc.mod.o;  true
