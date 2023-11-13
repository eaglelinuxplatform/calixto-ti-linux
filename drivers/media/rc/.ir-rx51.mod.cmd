cmd_drivers/media/rc/ir-rx51.mod := printf '%s\n'   ir-rx51.o | awk '!x[$$0]++ { print("drivers/media/rc/"$$0) }' > drivers/media/rc/ir-rx51.mod
