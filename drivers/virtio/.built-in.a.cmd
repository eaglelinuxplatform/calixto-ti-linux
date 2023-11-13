cmd_drivers/virtio/built-in.a := rm -f drivers/virtio/built-in.a;  printf "drivers/virtio/%s " virtio.o virtio_ring.o virtio_anchor.o | xargs arm-oe-linux-gnueabi-ar cDPrST drivers/virtio/built-in.a
