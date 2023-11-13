cmd_sound/soc/ti/snd-soc-omap-twl4030.mod := printf '%s\n'   omap-twl4030.o | awk '!x[$$0]++ { print("sound/soc/ti/"$$0) }' > sound/soc/ti/snd-soc-omap-twl4030.mod
