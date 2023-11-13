cmd_net/802/psnap.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/802/psnap.ko net/802/psnap.o net/802/psnap.mod.o;  true
