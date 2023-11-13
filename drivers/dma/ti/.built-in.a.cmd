cmd_drivers/dma/ti/built-in.a := rm -f drivers/dma/ti/built-in.a;  printf "drivers/dma/ti/%s " edma.o omap-dma.o dma-crossbar.o | xargs arm-oe-linux-gnueabi-ar cDPrST drivers/dma/ti/built-in.a
