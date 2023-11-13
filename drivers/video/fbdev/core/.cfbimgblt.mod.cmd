cmd_drivers/video/fbdev/core/cfbimgblt.mod := printf '%s\n'   cfbimgblt.o | awk '!x[$$0]++ { print("drivers/video/fbdev/core/"$$0) }' > drivers/video/fbdev/core/cfbimgblt.mod
