cmd_drivers/video/backlight/pandora_bl.mod := printf '%s\n'   pandora_bl.o | awk '!x[$$0]++ { print("drivers/video/backlight/"$$0) }' > drivers/video/backlight/pandora_bl.mod
