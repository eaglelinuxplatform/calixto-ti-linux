cmd_drivers/crypto/omap-crypto.mod := printf '%s\n'   omap-crypto.o | awk '!x[$$0]++ { print("drivers/crypto/"$$0) }' > drivers/crypto/omap-crypto.mod
