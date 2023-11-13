cmd_crypto/fcrypt.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/fcrypt.ko crypto/fcrypt.o crypto/fcrypt.mod.o;  true
