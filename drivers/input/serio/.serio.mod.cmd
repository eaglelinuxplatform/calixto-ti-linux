cmd_drivers/input/serio/serio.mod := printf '%s\n'   serio.o | awk '!x[$$0]++ { print("drivers/input/serio/"$$0) }' > drivers/input/serio/serio.mod
