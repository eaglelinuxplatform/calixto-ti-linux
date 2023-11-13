cmd_drivers/remoteproc/wkup_m3_rproc.mod := printf '%s\n'   wkup_m3_rproc.o | awk '!x[$$0]++ { print("drivers/remoteproc/"$$0) }' > drivers/remoteproc/wkup_m3_rproc.mod
