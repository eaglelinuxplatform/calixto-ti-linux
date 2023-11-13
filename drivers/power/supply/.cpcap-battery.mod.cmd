cmd_drivers/power/supply/cpcap-battery.mod := printf '%s\n'   cpcap-battery.o | awk '!x[$$0]++ { print("drivers/power/supply/"$$0) }' > drivers/power/supply/cpcap-battery.mod
