cmd_drivers/media/mc/mc.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/media/mc/mc.ko drivers/media/mc/mc.o drivers/media/mc/mc.mod.o;  true
