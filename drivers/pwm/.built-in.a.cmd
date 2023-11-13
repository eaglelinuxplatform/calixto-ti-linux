cmd_drivers/pwm/built-in.a := rm -f drivers/pwm/built-in.a;  printf "drivers/pwm/%s " core.o sysfs.o | xargs arm-oe-linux-gnueabi-ar cDPrST drivers/pwm/built-in.a
