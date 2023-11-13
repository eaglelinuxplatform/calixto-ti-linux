cmd_sound/soc/codecs/snd-soc-cpcap.mod := printf '%s\n'   cpcap.o | awk '!x[$$0]++ { print("sound/soc/codecs/"$$0) }' > sound/soc/codecs/snd-soc-cpcap.mod
