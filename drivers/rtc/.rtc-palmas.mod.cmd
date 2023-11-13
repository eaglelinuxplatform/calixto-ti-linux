cmd_drivers/rtc/rtc-palmas.mod := printf '%s\n'   rtc-palmas.o | awk '!x[$$0]++ { print("drivers/rtc/"$$0) }' > drivers/rtc/rtc-palmas.mod
