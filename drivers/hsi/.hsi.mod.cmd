cmd_drivers/hsi/hsi.mod := printf '%s\n'   hsi_core.o hsi_boardinfo.o | awk '!x[$$0]++ { print("drivers/hsi/"$$0) }' > drivers/hsi/hsi.mod
