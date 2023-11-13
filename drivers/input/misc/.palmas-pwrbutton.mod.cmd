cmd_drivers/input/misc/palmas-pwrbutton.mod := printf '%s\n'   palmas-pwrbutton.o | awk '!x[$$0]++ { print("drivers/input/misc/"$$0) }' > drivers/input/misc/palmas-pwrbutton.mod
