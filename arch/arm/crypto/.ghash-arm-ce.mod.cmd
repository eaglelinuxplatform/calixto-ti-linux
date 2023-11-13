cmd_arch/arm/crypto/ghash-arm-ce.mod := printf '%s\n'   ghash-ce-core.o ghash-ce-glue.o | awk '!x[$$0]++ { print("arch/arm/crypto/"$$0) }' > arch/arm/crypto/ghash-arm-ce.mod
