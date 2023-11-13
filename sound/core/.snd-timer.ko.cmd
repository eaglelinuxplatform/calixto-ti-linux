cmd_sound/core/snd-timer.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o sound/core/snd-timer.ko sound/core/snd-timer.o sound/core/snd-timer.mod.o;  true
