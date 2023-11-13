cmd_drivers/hsi/hsi.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/hsi/hsi.ko drivers/hsi/hsi.o drivers/hsi/hsi.mod.o;  true
