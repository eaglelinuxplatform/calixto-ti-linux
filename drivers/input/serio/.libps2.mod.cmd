cmd_drivers/input/serio/libps2.mod := printf '%s\n'   libps2.o | awk '!x[$$0]++ { print("drivers/input/serio/"$$0) }' > drivers/input/serio/libps2.mod
