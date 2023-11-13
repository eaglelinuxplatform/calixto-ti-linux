cmd_arch/arm/crypto/sha1-arm-neon.mod := printf '%s\n'   sha1-armv7-neon.o sha1_neon_glue.o | awk '!x[$$0]++ { print("arch/arm/crypto/"$$0) }' > arch/arm/crypto/sha1-arm-neon.mod
