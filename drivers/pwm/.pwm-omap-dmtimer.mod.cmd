cmd_drivers/pwm/pwm-omap-dmtimer.mod := printf '%s\n'   pwm-omap-dmtimer.o | awk '!x[$$0]++ { print("drivers/pwm/"$$0) }' > drivers/pwm/pwm-omap-dmtimer.mod
