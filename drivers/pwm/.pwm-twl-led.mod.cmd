cmd_drivers/pwm/pwm-twl-led.mod := printf '%s\n'   pwm-twl-led.o | awk '!x[$$0]++ { print("drivers/pwm/"$$0) }' > drivers/pwm/pwm-twl-led.mod
