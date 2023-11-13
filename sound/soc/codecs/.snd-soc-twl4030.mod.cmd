cmd_sound/soc/codecs/snd-soc-twl4030.mod := printf '%s\n'   twl4030.o | awk '!x[$$0]++ { print("sound/soc/codecs/"$$0) }' > sound/soc/codecs/snd-soc-twl4030.mod
