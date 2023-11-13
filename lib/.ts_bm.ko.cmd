cmd_lib/ts_bm.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o lib/ts_bm.ko lib/ts_bm.o lib/ts_bm.mod.o;  true
