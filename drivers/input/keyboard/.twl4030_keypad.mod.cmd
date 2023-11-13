cmd_drivers/input/keyboard/twl4030_keypad.mod := printf '%s\n'   twl4030_keypad.o | awk '!x[$$0]++ { print("drivers/input/keyboard/"$$0) }' > drivers/input/keyboard/twl4030_keypad.mod
