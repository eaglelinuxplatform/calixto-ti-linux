cmd_fs/cramfs/built-in.a := rm -f fs/cramfs/built-in.a;  printf "fs/cramfs/%s " inode.o uncompress.o | xargs arm-oe-linux-gnueabi-ar cDPrST fs/cramfs/built-in.a
