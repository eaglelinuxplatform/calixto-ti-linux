cmd_drivers/spi/spi-ti-qspi.mod := printf '%s\n'   spi-ti-qspi.o | awk '!x[$$0]++ { print("drivers/spi/"$$0) }' > drivers/spi/spi-ti-qspi.mod
