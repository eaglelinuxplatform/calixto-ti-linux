cmd_drivers/hsi/controllers/omap_ssi.mod := printf '%s\n'   omap_ssi_core.o omap_ssi_port.o | awk '!x[$$0]++ { print("drivers/hsi/controllers/"$$0) }' > drivers/hsi/controllers/omap_ssi.mod
