cmd_drivers/power/supply/cpcap-charger.mod := printf '%s\n'   cpcap-charger.o | awk '!x[$$0]++ { print("drivers/power/supply/"$$0) }' > drivers/power/supply/cpcap-charger.mod
