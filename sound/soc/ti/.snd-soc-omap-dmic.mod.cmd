cmd_sound/soc/ti/snd-soc-omap-dmic.mod := printf '%s\n'   omap-dmic.o | awk '!x[$$0]++ { print("sound/soc/ti/"$$0) }' > sound/soc/ti/snd-soc-omap-dmic.mod
