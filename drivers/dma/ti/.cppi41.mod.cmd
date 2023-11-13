cmd_drivers/dma/ti/cppi41.mod := printf '%s\n'   cppi41.o | awk '!x[$$0]++ { print("drivers/dma/ti/"$$0) }' > drivers/dma/ti/cppi41.mod
