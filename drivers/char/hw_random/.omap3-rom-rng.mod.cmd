cmd_drivers/char/hw_random/omap3-rom-rng.mod := printf '%s\n'   omap3-rom-rng.o | awk '!x[$$0]++ { print("drivers/char/hw_random/"$$0) }' > drivers/char/hw_random/omap3-rom-rng.mod
