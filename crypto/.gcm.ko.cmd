cmd_crypto/gcm.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/gcm.ko crypto/gcm.o crypto/gcm.mod.o;  true
