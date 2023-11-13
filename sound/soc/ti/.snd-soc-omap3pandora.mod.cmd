cmd_sound/soc/ti/snd-soc-omap3pandora.mod := printf '%s\n'   omap3pandora.o | awk '!x[$$0]++ { print("sound/soc/ti/"$$0) }' > sound/soc/ti/snd-soc-omap3pandora.mod
