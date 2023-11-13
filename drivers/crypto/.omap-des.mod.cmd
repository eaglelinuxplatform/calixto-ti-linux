cmd_drivers/crypto/omap-des.mod := printf '%s\n'   omap-des.o | awk '!x[$$0]++ { print("drivers/crypto/"$$0) }' > drivers/crypto/omap-des.mod
