cmd_drivers/counter/ti-eqep.mod := printf '%s\n'   ti-eqep.o | awk '!x[$$0]++ { print("drivers/counter/"$$0) }' > drivers/counter/ti-eqep.mod
