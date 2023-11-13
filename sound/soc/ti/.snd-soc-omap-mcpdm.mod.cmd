cmd_sound/soc/ti/snd-soc-omap-mcpdm.mod := printf '%s\n'   omap-mcpdm.o | awk '!x[$$0]++ { print("sound/soc/ti/"$$0) }' > sound/soc/ti/snd-soc-omap-mcpdm.mod
