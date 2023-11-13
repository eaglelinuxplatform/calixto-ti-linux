cmd_arch/arm/crypto/sha256-arm.mod := printf '%s\n'   sha256-core.o sha256_glue.o sha256_neon_glue.o | awk '!x[$$0]++ { print("arch/arm/crypto/"$$0) }' > arch/arm/crypto/sha256-arm.mod
