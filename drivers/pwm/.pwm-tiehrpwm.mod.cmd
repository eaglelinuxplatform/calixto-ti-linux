cmd_drivers/pwm/pwm-tiehrpwm.mod := printf '%s\n'   pwm-tiehrpwm.o | awk '!x[$$0]++ { print("drivers/pwm/"$$0) }' > drivers/pwm/pwm-tiehrpwm.mod
