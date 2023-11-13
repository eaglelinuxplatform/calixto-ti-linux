cmd_fs/notify/dnotify/built-in.a := rm -f fs/notify/dnotify/built-in.a;  printf "fs/notify/dnotify/%s " dnotify.o | xargs arm-oe-linux-gnueabi-ar cDPrST fs/notify/dnotify/built-in.a
