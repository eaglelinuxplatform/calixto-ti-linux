cmd_crypto/pcbc.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/pcbc.ko crypto/pcbc.o crypto/pcbc.mod.o;  true
