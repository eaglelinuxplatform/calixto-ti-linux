cmd_block/partitions/built-in.a := rm -f block/partitions/built-in.a;  printf "block/partitions/%s " core.o msdos.o efi.o | xargs arm-oe-linux-gnueabi-ar cDPrST block/partitions/built-in.a
