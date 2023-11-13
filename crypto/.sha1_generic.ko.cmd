cmd_crypto/sha1_generic.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/sha1_generic.ko crypto/sha1_generic.o crypto/sha1_generic.mod.o;  true
