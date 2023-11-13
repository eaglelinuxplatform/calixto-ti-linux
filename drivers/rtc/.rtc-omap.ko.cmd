cmd_drivers/rtc/rtc-omap.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/rtc/rtc-omap.ko drivers/rtc/rtc-omap.o drivers/rtc/rtc-omap.mod.o;  true
