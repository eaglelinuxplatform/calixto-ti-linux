cmd_drivers/pwm/pwm-twl.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/pwm/pwm-twl.ko drivers/pwm/pwm-twl.o drivers/pwm/pwm-twl.mod.o;  true
