cmd_drivers/pci/pcie/built-in.a := rm -f drivers/pci/pcie/built-in.a;  printf "drivers/pci/pcie/%s " aspm.o | xargs arm-oe-linux-gnueabi-ar cDPrST drivers/pci/pcie/built-in.a
