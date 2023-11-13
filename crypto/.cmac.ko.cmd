cmd_crypto/cmac.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/cmac.ko crypto/cmac.o crypto/cmac.mod.o;  true
