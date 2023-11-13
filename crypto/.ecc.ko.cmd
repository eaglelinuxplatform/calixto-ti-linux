cmd_crypto/ecc.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/ecc.ko crypto/ecc.o crypto/ecc.mod.o;  true
