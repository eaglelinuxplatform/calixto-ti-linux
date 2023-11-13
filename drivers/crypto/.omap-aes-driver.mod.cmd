cmd_drivers/crypto/omap-aes-driver.mod := printf '%s\n'   omap-aes.o omap-aes-gcm.o | awk '!x[$$0]++ { print("drivers/crypto/"$$0) }' > drivers/crypto/omap-aes-driver.mod
