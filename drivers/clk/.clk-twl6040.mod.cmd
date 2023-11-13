cmd_drivers/clk/clk-twl6040.mod := printf '%s\n'   clk-twl6040.o | awk '!x[$$0]++ { print("drivers/clk/"$$0) }' > drivers/clk/clk-twl6040.mod
