cmd_fs/nfs_common/built-in.a := rm -f fs/nfs_common/built-in.a;  printf "fs/nfs_common/%s " nfsacl.o grace.o | xargs arm-oe-linux-gnueabi-ar cDPrST fs/nfs_common/built-in.a
