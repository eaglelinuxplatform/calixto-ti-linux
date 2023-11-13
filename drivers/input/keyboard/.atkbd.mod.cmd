cmd_drivers/input/keyboard/atkbd.mod := printf '%s\n'   atkbd.o | awk '!x[$$0]++ { print("drivers/input/keyboard/"$$0) }' > drivers/input/keyboard/atkbd.mod
