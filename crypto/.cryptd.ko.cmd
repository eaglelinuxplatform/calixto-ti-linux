cmd_crypto/cryptd.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/cryptd.ko crypto/cryptd.o crypto/cryptd.mod.o;  true
