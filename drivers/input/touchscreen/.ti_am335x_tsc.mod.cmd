cmd_drivers/input/touchscreen/ti_am335x_tsc.mod := printf '%s\n'   ti_am335x_tsc.o | awk '!x[$$0]++ { print("drivers/input/touchscreen/"$$0) }' > drivers/input/touchscreen/ti_am335x_tsc.mod
