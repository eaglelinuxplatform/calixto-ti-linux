cmd_drivers/hsi/clients/ssi_protocol.mod := printf '%s\n'   ssi_protocol.o | awk '!x[$$0]++ { print("drivers/hsi/clients/"$$0) }' > drivers/hsi/clients/ssi_protocol.mod
