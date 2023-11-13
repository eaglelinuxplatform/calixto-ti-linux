cmd_drivers/w1/masters/omap_hdq.mod := printf '%s\n'   omap_hdq.o | awk '!x[$$0]++ { print("drivers/w1/masters/"$$0) }' > drivers/w1/masters/omap_hdq.mod
