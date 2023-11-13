cmd_crypto/ecdh_generic.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/ecdh_generic.ko crypto/ecdh_generic.o crypto/ecdh_generic.mod.o;  true
