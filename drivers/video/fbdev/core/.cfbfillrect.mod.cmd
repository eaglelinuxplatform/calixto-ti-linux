cmd_drivers/video/fbdev/core/cfbfillrect.mod := printf '%s\n'   cfbfillrect.o | awk '!x[$$0]++ { print("drivers/video/fbdev/core/"$$0) }' > drivers/video/fbdev/core/cfbfillrect.mod
