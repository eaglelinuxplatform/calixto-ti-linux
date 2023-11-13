cmd_sound/soundcore.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o sound/soundcore.ko sound/soundcore.o sound/soundcore.mod.o;  true
