cmd_drivers/power/supply/bq24190_charger.mod := printf '%s\n'   bq24190_charger.o | awk '!x[$$0]++ { print("drivers/power/supply/"$$0) }' > drivers/power/supply/bq24190_charger.mod
