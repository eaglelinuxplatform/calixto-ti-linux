cmd_net/can/can-bcm.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/can/can-bcm.ko net/can/can-bcm.o net/can/can-bcm.mod.o;  true
