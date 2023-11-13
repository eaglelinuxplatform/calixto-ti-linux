cmd_crypto/drbg.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/drbg.ko crypto/drbg.o crypto/drbg.mod.o;  true
