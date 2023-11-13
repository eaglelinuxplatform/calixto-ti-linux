cmd_drivers/connector/cn.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/connector/cn.ko drivers/connector/cn.o drivers/connector/cn.mod.o;  true
