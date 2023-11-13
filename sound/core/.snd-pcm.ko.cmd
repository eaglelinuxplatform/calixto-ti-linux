cmd_sound/core/snd-pcm.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o sound/core/snd-pcm.ko sound/core/snd-pcm.o sound/core/snd-pcm.mod.o;  true
