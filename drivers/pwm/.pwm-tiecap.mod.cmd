cmd_drivers/pwm/pwm-tiecap.mod := printf '%s\n'   pwm-tiecap.o | awk '!x[$$0]++ { print("drivers/pwm/"$$0) }' > drivers/pwm/pwm-tiecap.mod
