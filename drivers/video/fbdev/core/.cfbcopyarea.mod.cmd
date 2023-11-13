cmd_drivers/video/fbdev/core/cfbcopyarea.mod := printf '%s\n'   cfbcopyarea.o | awk '!x[$$0]++ { print("drivers/video/fbdev/core/"$$0) }' > drivers/video/fbdev/core/cfbcopyarea.mod
