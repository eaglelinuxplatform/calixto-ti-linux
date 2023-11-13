cmd_crypto/aes_generic.mod := printf '%s\n'   aes_generic.o | awk '!x[$$0]++ { print("crypto/"$$0) }' > crypto/aes_generic.mod
