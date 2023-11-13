cmd_drivers/soc/ti/pm33xx.mod := printf '%s\n'   pm33xx.o | awk '!x[$$0]++ { print("drivers/soc/ti/"$$0) }' > drivers/soc/ti/pm33xx.mod
