cmd_fs/sysfs/built-in.a := rm -f fs/sysfs/built-in.a;  printf "fs/sysfs/%s " file.o dir.o symlink.o mount.o group.o | xargs arm-oe-linux-gnueabi-ar cDPrST fs/sysfs/built-in.a
