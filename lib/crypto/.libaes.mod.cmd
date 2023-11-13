cmd_lib/crypto/libaes.mod := printf '%s\n'   aes.o | awk '!x[$$0]++ { print("lib/crypto/"$$0) }' > lib/crypto/libaes.mod
