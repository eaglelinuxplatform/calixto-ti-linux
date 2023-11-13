cmd_drivers/input/vivaldi-fmap.mod := printf '%s\n'   vivaldi-fmap.o | awk '!x[$$0]++ { print("drivers/input/"$$0) }' > drivers/input/vivaldi-fmap.mod
