cmd_lib/ts_fsm.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o lib/ts_fsm.ko lib/ts_fsm.o lib/ts_fsm.mod.o;  true
