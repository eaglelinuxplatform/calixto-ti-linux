cmd_crypto/md5.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/md5.ko crypto/md5.o crypto/md5.mod.o;  true
