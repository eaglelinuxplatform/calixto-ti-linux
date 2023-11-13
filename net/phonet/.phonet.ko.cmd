cmd_net/phonet/phonet.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/phonet/phonet.ko net/phonet/phonet.o net/phonet/phonet.mod.o;  true
