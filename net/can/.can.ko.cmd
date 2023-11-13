cmd_net/can/can.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/can/can.ko net/can/can.o net/can/can.mod.o;  true
