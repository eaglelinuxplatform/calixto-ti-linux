cmd_drivers/extcon/extcon-palmas.mod := printf '%s\n'   extcon-palmas.o | awk '!x[$$0]++ { print("drivers/extcon/"$$0) }' > drivers/extcon/extcon-palmas.mod
