cmd_drivers/rpmsg-kdrv/rpmsg_kdrv_switch.mod := printf '%s\n'   rpmsg_kdrv_switch.o | awk '!x[$$0]++ { print("drivers/rpmsg-kdrv/"$$0) }' > drivers/rpmsg-kdrv/rpmsg_kdrv_switch.mod
