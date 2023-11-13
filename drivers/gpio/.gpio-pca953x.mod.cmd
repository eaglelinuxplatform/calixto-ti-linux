cmd_drivers/gpio/gpio-pca953x.mod := printf '%s\n'   gpio-pca953x.o | awk '!x[$$0]++ { print("drivers/gpio/"$$0) }' > drivers/gpio/gpio-pca953x.mod
