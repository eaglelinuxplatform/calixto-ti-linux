cmd_drivers/watchdog/omap_wdt.mod := printf '%s\n'   omap_wdt.o | awk '!x[$$0]++ { print("drivers/watchdog/"$$0) }' > drivers/watchdog/omap_wdt.mod
