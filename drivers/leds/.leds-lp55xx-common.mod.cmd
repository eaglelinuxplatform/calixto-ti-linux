cmd_drivers/leds/leds-lp55xx-common.mod := printf '%s\n'   leds-lp55xx-common.o | awk '!x[$$0]++ { print("drivers/leds/"$$0) }' > drivers/leds/leds-lp55xx-common.mod
