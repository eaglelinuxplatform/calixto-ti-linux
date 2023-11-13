cmd_net/ipv4/udp_tunnel.ko := arm-oe-linux-gnueabi-ld -r -EL -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/ipv4/udp_tunnel.ko net/ipv4/udp_tunnel.o net/ipv4/udp_tunnel.mod.o;  true
