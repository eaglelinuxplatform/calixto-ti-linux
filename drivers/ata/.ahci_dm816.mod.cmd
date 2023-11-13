cmd_drivers/ata/ahci_dm816.mod := printf '%s\n'   ahci_dm816.o | awk '!x[$$0]++ { print("drivers/ata/"$$0) }' > drivers/ata/ahci_dm816.mod
