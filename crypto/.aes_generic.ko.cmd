cmd_crypto/aes_generic.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/aes_generic.ko crypto/aes_generic.o crypto/aes_generic.mod.o;  true
