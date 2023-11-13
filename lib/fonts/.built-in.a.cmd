cmd_lib/fonts/built-in.a := rm -f lib/fonts/built-in.a;  printf "lib/fonts/%s " fonts.o font_8x8.o font_8x16.o | xargs arm-oe-linux-gnueabi-ar cDPrST lib/fonts/built-in.a
