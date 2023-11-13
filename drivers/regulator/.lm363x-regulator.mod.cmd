cmd_drivers/regulator/lm363x-regulator.mod := printf '%s\n'   lm363x-regulator.o | awk '!x[$$0]++ { print("drivers/regulator/"$$0) }' > drivers/regulator/lm363x-regulator.mod
