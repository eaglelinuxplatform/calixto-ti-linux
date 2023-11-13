cmd_drivers/input/keyboard/omap4-keypad.mod := printf '%s\n'   omap4-keypad.o | awk '!x[$$0]++ { print("drivers/input/keyboard/"$$0) }' > drivers/input/keyboard/omap4-keypad.mod
