cmd_drivers/input/misc/twl4030-pwrbutton.mod := printf '%s\n'   twl4030-pwrbutton.o | awk '!x[$$0]++ { print("drivers/input/misc/"$$0) }' > drivers/input/misc/twl4030-pwrbutton.mod
