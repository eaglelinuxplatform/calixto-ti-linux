cmd_fs/ramfs/built-in.a := rm -f fs/ramfs/built-in.a;  printf "fs/ramfs/%s " inode.o file-mmu.o | xargs arm-oe-linux-gnueabi-ar cDPrST fs/ramfs/built-in.a
