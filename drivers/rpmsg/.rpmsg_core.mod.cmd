cmd_drivers/rpmsg/rpmsg_core.mod := printf '%s\n'   rpmsg_core.o | awk '!x[$$0]++ { print("drivers/rpmsg/"$$0) }' > drivers/rpmsg/rpmsg_core.mod
