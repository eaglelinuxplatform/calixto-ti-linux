cmd_drivers/nvme/built-in.a := rm -f drivers/nvme/built-in.a;  printf "drivers/nvme/%s " host/built-in.a target/built-in.a | xargs arm-oe-linux-gnueabi-ar cDPrST drivers/nvme/built-in.a
