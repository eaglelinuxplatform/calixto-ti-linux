cmd_drivers/input/misc/cpcap-pwrbutton.mod := printf '%s\n'   cpcap-pwrbutton.o | awk '!x[$$0]++ { print("drivers/input/misc/"$$0) }' > drivers/input/misc/cpcap-pwrbutton.mod
