cmd_drivers/regulator/tps62360-regulator.mod := printf '%s\n'   tps62360-regulator.o | awk '!x[$$0]++ { print("drivers/regulator/"$$0) }' > drivers/regulator/tps62360-regulator.mod
