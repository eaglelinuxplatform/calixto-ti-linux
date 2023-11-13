cmd_crypto/ecb.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/ecb.ko crypto/ecb.o crypto/ecb.mod.o;  true
