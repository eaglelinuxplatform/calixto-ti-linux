cmd_drivers/mailbox/built-in.a := rm -f drivers/mailbox/built-in.a;  printf "drivers/mailbox/%s " mailbox.o | xargs arm-oe-linux-gnueabi-ar cDPrST drivers/mailbox/built-in.a
