cmd_drivers/rtc/rtc-twl.mod := printf '%s\n'   rtc-twl.o | awk '!x[$$0]++ { print("drivers/rtc/"$$0) }' > drivers/rtc/rtc-twl.mod
