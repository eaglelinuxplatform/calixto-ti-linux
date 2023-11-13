cmd_drivers/leds/leds-lp5523.mod := printf '%s\n'   leds-lp5523.o | awk '!x[$$0]++ { print("drivers/leds/"$$0) }' > drivers/leds/leds-lp5523.mod
