cmd_drivers/power/supply/twl4030_charger.mod := printf '%s\n'   twl4030_charger.o | awk '!x[$$0]++ { print("drivers/power/supply/"$$0) }' > drivers/power/supply/twl4030_charger.mod
