cmd_crypto/crypto_simd.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/crypto_simd.ko crypto/crypto_simd.o crypto/crypto_simd.mod.o;  true
