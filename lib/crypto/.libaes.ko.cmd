cmd_lib/crypto/libaes.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o lib/crypto/libaes.ko lib/crypto/libaes.o lib/crypto/libaes.mod.o;  true
