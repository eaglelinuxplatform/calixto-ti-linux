cmd_drivers/soc/ti/wkup_m3_ipc.mod := printf '%s\n'   wkup_m3_ipc.o | awk '!x[$$0]++ { print("drivers/soc/ti/"$$0) }' > drivers/soc/ti/wkup_m3_ipc.mod
