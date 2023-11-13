cmd_drivers/memory/ti-emif-sram.mod := printf '%s\n'   ti-emif-pm.o ti-emif-sram-pm.o | awk '!x[$$0]++ { print("drivers/memory/"$$0) }' > drivers/memory/ti-emif-sram.mod
