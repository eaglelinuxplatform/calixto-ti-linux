cmd_sound/soc/ti/snd-soc-rx51.mod := printf '%s\n'   rx51.o | awk '!x[$$0]++ { print("sound/soc/ti/"$$0) }' > sound/soc/ti/snd-soc-rx51.mod
