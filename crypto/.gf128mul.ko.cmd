cmd_crypto/gf128mul.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/gf128mul.ko crypto/gf128mul.o crypto/gf128mul.mod.o;  true
