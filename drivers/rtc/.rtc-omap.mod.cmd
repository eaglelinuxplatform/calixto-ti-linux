cmd_drivers/rtc/rtc-omap.mod := printf '%s\n'   rtc-omap.o | awk '!x[$$0]++ { print("drivers/rtc/"$$0) }' > drivers/rtc/rtc-omap.mod
