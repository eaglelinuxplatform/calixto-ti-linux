cmd_drivers/clk/clk-palmas.mod := printf '%s\n'   clk-palmas.o | awk '!x[$$0]++ { print("drivers/clk/"$$0) }' > drivers/clk/clk-palmas.mod
