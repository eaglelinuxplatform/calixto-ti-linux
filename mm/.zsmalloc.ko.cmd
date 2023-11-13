cmd_mm/zsmalloc.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o mm/zsmalloc.ko mm/zsmalloc.o mm/zsmalloc.mod.o;  true
