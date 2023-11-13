cmd_lib/ts_kmp.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o lib/ts_kmp.ko lib/ts_kmp.o lib/ts_kmp.mod.o;  true
