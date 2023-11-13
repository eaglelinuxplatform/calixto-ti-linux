cmd_sound/soc/codecs/snd-soc-twl6040.mod := printf '%s\n'   twl6040.o | awk '!x[$$0]++ { print("sound/soc/codecs/"$$0) }' > sound/soc/codecs/snd-soc-twl6040.mod
