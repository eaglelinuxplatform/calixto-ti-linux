cmd_drivers/rtc/rtc-cpcap.mod := printf '%s\n'   rtc-cpcap.o | awk '!x[$$0]++ { print("drivers/rtc/"$$0) }' > drivers/rtc/rtc-cpcap.mod
