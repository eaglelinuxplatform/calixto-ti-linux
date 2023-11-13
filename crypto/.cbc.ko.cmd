cmd_crypto/cbc.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/cbc.ko crypto/cbc.o crypto/cbc.mod.o;  true
