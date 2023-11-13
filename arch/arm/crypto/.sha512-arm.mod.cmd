cmd_arch/arm/crypto/sha512-arm.mod := printf '%s\n'   sha512-core.o sha512-glue.o sha512-neon-glue.o | awk '!x[$$0]++ { print("arch/arm/crypto/"$$0) }' > arch/arm/crypto/sha512-arm.mod
