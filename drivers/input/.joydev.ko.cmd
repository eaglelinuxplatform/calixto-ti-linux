cmd_drivers/input/joydev.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/input/joydev.ko drivers/input/joydev.o drivers/input/joydev.mod.o;  true
