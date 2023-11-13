cmd_sound/soc/ti/snd-soc-omap-mcbsp.mod := printf '%s\n'   omap-mcbsp.o omap-mcbsp-st.o | awk '!x[$$0]++ { print("sound/soc/ti/"$$0) }' > sound/soc/ti/snd-soc-omap-mcbsp.mod
