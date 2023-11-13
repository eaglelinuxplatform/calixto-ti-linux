cmd_drivers/memory/emif.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/memory/emif.ko drivers/memory/emif.o drivers/memory/emif.mod.o;  true
