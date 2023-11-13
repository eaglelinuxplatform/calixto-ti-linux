cmd_lib/crypto/libarc4.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o lib/crypto/libarc4.ko lib/crypto/libarc4.o lib/crypto/libarc4.mod.o;  true
