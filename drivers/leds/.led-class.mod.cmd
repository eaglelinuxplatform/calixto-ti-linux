cmd_drivers/leds/led-class.mod := printf '%s\n'   led-class.o | awk '!x[$$0]++ { print("drivers/leds/"$$0) }' > drivers/leds/led-class.mod
