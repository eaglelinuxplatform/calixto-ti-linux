cmd_drivers/input/keyboard/matrix_keypad.mod := printf '%s\n'   matrix_keypad.o | awk '!x[$$0]++ { print("drivers/input/keyboard/"$$0) }' > drivers/input/keyboard/matrix_keypad.mod
