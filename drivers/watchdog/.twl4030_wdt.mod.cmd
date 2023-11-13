cmd_drivers/watchdog/twl4030_wdt.mod := printf '%s\n'   twl4030_wdt.o | awk '!x[$$0]++ { print("drivers/watchdog/"$$0) }' > drivers/watchdog/twl4030_wdt.mod
