cmd_sound/soc/ti/snd-soc-omap-hdmi.mod := printf '%s\n'   omap-hdmi.o | awk '!x[$$0]++ { print("sound/soc/ti/"$$0) }' > sound/soc/ti/snd-soc-omap-hdmi.mod
