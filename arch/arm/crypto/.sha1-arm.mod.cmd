cmd_arch/arm/crypto/sha1-arm.mod := printf '%s\n'   sha1-armv4-large.o sha1_glue.o | awk '!x[$$0]++ { print("arch/arm/crypto/"$$0) }' > arch/arm/crypto/sha1-arm.mod
