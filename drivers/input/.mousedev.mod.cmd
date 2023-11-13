cmd_drivers/input/mousedev.mod := printf '%s\n'   mousedev.o | awk '!x[$$0]++ { print("drivers/input/"$$0) }' > drivers/input/mousedev.mod
