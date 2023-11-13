cmd_drivers/pwm/pwm-twl.mod := printf '%s\n'   pwm-twl.o | awk '!x[$$0]++ { print("drivers/pwm/"$$0) }' > drivers/pwm/pwm-twl.mod
