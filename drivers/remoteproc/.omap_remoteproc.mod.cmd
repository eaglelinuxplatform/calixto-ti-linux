cmd_drivers/remoteproc/omap_remoteproc.mod := printf '%s\n'   omap_remoteproc.o | awk '!x[$$0]++ { print("drivers/remoteproc/"$$0) }' > drivers/remoteproc/omap_remoteproc.mod
