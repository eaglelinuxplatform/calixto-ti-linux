cmd_drivers/crypto/omap-sham.mod := printf '%s\n'   omap-sham.o | awk '!x[$$0]++ { print("drivers/crypto/"$$0) }' > drivers/crypto/omap-sham.mod
