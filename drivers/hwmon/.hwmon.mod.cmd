cmd_drivers/hwmon/hwmon.mod := printf '%s\n'   hwmon.o | awk '!x[$$0]++ { print("drivers/hwmon/"$$0) }' > drivers/hwmon/hwmon.mod
