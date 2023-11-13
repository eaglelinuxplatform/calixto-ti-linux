cmd_crypto/ghash-generic.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/ghash-generic.ko crypto/ghash-generic.o crypto/ghash-generic.mod.o;  true
