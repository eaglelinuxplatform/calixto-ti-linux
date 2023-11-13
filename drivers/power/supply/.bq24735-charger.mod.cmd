cmd_drivers/power/supply/bq24735-charger.mod := printf '%s\n'   bq24735-charger.o | awk '!x[$$0]++ { print("drivers/power/supply/"$$0) }' > drivers/power/supply/bq24735-charger.mod
