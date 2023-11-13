cmd_crypto/ccm.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/ccm.ko crypto/ccm.o crypto/ccm.mod.o;  true
