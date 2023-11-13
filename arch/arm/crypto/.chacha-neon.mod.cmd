cmd_arch/arm/crypto/chacha-neon.mod := printf '%s\n'   chacha-scalar-core.o chacha-glue.o chacha-neon-core.o | awk '!x[$$0]++ { print("arch/arm/crypto/"$$0) }' > arch/arm/crypto/chacha-neon.mod
