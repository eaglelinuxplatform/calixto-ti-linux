cmd_drivers/memory/emif.mod := printf '%s\n'   emif.o | awk '!x[$$0]++ { print("drivers/memory/"$$0) }' > drivers/memory/emif.mod
