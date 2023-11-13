cmd_drivers/power/supply/bq2415x_charger.mod := printf '%s\n'   bq2415x_charger.o | awk '!x[$$0]++ { print("drivers/power/supply/"$$0) }' > drivers/power/supply/bq2415x_charger.mod
