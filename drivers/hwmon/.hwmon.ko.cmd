cmd_drivers/hwmon/hwmon.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/hwmon/hwmon.ko drivers/hwmon/hwmon.o drivers/hwmon/hwmon.mod.o;  true
