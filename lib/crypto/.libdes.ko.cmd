cmd_lib/crypto/libdes.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o lib/crypto/libdes.ko lib/crypto/libdes.o lib/crypto/libdes.mod.o;  true
