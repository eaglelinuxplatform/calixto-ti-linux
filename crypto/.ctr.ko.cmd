cmd_crypto/ctr.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/ctr.ko crypto/ctr.o crypto/ctr.mod.o;  true
