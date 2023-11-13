cmd_drivers/leds/trigger/built-in.a := rm -f drivers/leds/trigger/built-in.a;  printf "drivers/leds/trigger/%s " ledtrig-cpu.o | xargs arm-oe-linux-gnueabi-ar cDPrST drivers/leds/trigger/built-in.a
