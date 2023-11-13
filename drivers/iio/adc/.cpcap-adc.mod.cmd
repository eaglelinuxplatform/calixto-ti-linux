cmd_drivers/iio/adc/cpcap-adc.mod := printf '%s\n'   cpcap-adc.o | awk '!x[$$0]++ { print("drivers/iio/adc/"$$0) }' > drivers/iio/adc/cpcap-adc.mod
