cmd_drivers/leds/leds-cpcap.mod := printf '%s\n'   leds-cpcap.o | awk '!x[$$0]++ { print("drivers/leds/"$$0) }' > drivers/leds/leds-cpcap.mod
