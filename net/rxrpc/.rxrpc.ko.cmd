cmd_net/rxrpc/rxrpc.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/rxrpc/rxrpc.ko net/rxrpc/rxrpc.o net/rxrpc/rxrpc.mod.o;  true
