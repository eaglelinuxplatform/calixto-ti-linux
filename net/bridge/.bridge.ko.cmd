cmd_net/bridge/bridge.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/bridge/bridge.ko net/bridge/bridge.o net/bridge/bridge.mod.o;  true
