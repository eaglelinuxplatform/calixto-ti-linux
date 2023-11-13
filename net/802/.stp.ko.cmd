cmd_net/802/stp.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/802/stp.ko net/802/stp.o net/802/stp.mod.o;  true
