cmd_drivers/gpu/drm/drm.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/gpu/drm/drm.ko drivers/gpu/drm/drm.o drivers/gpu/drm/drm.mod.o;  true
