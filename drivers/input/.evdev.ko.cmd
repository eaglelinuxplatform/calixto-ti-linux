cmd_drivers/input/evdev.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/input/evdev.ko drivers/input/evdev.o drivers/input/evdev.mod.o;  true
