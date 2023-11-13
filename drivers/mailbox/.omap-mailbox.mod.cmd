cmd_drivers/mailbox/omap-mailbox.mod := printf '%s\n'   omap-mailbox.o | awk '!x[$$0]++ { print("drivers/mailbox/"$$0) }' > drivers/mailbox/omap-mailbox.mod
