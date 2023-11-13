cmd_crypto/hmac.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/hmac.ko crypto/hmac.o crypto/hmac.mod.o;  true
