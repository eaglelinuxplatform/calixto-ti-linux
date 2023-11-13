cmd_arch/arm/crypto/aes-arm-bs.mod := printf '%s\n'   aes-neonbs-core.o aes-neonbs-glue.o | awk '!x[$$0]++ { print("arch/arm/crypto/"$$0) }' > arch/arm/crypto/aes-arm-bs.mod
