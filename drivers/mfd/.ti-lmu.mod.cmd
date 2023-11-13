cmd_drivers/mfd/ti-lmu.mod := printf '%s\n'   ti-lmu.o | awk '!x[$$0]++ { print("drivers/mfd/"$$0) }' > drivers/mfd/ti-lmu.mod
