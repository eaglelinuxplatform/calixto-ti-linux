cmd_arch/arm/crypto/aes-arm.mod := printf '%s\n'   aes-cipher-core.o aes-cipher-glue.o | awk '!x[$$0]++ { print("arch/arm/crypto/"$$0) }' > arch/arm/crypto/aes-arm.mod
