cmd_drivers/iio/adc/twl4030-madc.mod := printf '%s\n'   twl4030-madc.o | awk '!x[$$0]++ { print("drivers/iio/adc/"$$0) }' > drivers/iio/adc/twl4030-madc.mod
