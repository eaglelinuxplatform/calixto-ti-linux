cmd_sound/core/snd.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o sound/core/snd.ko sound/core/snd.o sound/core/snd.mod.o;  true
