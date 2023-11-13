cmd_net/8021q/8021q.mod := printf '%s\n'   vlan.o vlan_dev.o vlan_netlink.o vlanproc.o | awk '!x[$$0]++ { print("net/8021q/"$$0) }' > net/8021q/8021q.mod
