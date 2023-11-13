cmd_sound/core/snd-hwdep.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o sound/core/snd-hwdep.ko sound/core/snd-hwdep.o sound/core/snd-hwdep.mod.o;  true
