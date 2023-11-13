cmd_net/can/can-raw.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/can/can-raw.ko net/can/can-raw.o net/can/can-raw.mod.o;  true
