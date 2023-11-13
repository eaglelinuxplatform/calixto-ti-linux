#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbf2fd502, "dev_set_mtu" },
	{ 0x81680f7c, "dev_get_stats" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x27ef2c7e, "dev_mc_sync" },
	{ 0x62741661, "skb_copy_bits" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc921175e, "netdev_update_features" },
	{ 0x933dc050, "__nla_validate" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xaed9228f, "dev_uc_sync" },
	{ 0x644b8be1, "dev_uc_del" },
	{ 0xf601e4a8, "rtnl_link_register" },
	{ 0x58b4645c, "dev_close_many" },
	{ 0xa46562b5, "netif_inherit_tso_max" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x2d3f7c61, "dev_set_promiscuity" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x67669b9f, "eth_validate_addr" },
	{ 0x33eb902e, "netdev_warn" },
	{ 0x9a6fff32, "unregister_netdevice_queue" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xaeab7afe, "__dev_get_by_name" },
	{ 0xfd3acffc, "dev_uc_unsync" },
	{ 0xcdf4d106, "ether_setup" },
	{ 0xb4135311, "proc_create_net_data" },
	{ 0xb02a3c47, "netdev_upper_dev_link" },
	{ 0x48c39a62, "register_pernet_subsys" },
	{ 0x9f77ed8, "dev_addr_mod" },
	{ 0xa1971662, "alloc_netdev_mqs" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xd270645c, "eth_header_parse" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xe61a6643, "__current" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0x4b169df5, "__dev_get_by_index" },
	{ 0xba2259bb, "rtnl_link_unregister" },
	{ 0xe87dae76, "netif_stacked_transfer_operstate" },
	{ 0x8b1e3dd1, "skb_push" },
	{ 0xfc3f3589, "strscpy_pad" },
	{ 0xa72f8853, "netdev_upper_dev_unlink" },
	{ 0x714b06aa, "nla_put" },
	{ 0xe6cffcf9, "free_netdev" },
	{ 0xd932a814, "ns_capable" },
	{ 0xc765e4fe, "ethtool_op_get_link" },
	{ 0x26c1452b, "__ethtool_get_link_ksettings" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x48da9274, "unregister_pernet_subsys" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xde64562f, "vlan_ioctl_set" },
	{ 0x17363758, "proc_remove" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xeea0399, "strscpy" },
	{ 0x407d4405, "__dev_queue_xmit" },
	{ 0x2b04214c, "vlan_vid_add" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x52379a16, "linkwatch_fire_event" },
	{ 0x8e024dcf, "call_netdevice_notifiers" },
	{ 0x87127fe4, "vlan_vid_del" },
	{ 0x1e0ceabf, "dev_set_allmulti" },
	{ 0x16d5c4d0, "remove_proc_entry" },
	{ 0xf16731f3, "netif_carrier_off" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x4418ca21, "seq_printf" },
	{ 0xc8e173ed, "_find_next_bit_le" },
	{ 0xf278f519, "netif_carrier_on" },
	{ 0xfe5b61ec, "vlan_uses_dev" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x46372883, "seq_puts" },
	{ 0x2d6ad720, "_proc_mkdir" },
	{ 0x58768b42, "dev_uc_add" },
	{ 0xda2555ce, "vlan_dev_vlan_id" },
	{ 0xa16ea0f1, "proc_create_single_data" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xa7d21ca7, "dev_get_flags" },
	{ 0x1e5d57d2, "vlan_filter_drop_vids" },
	{ 0x1725bb31, "dev_mc_unsync" },
	{ 0x4be759b5, "vlan_filter_push_vids" },
	{ 0x7ce20912, "dev_change_flags" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x130d9731, "register_netdevice" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0C6979B1C117B04857024C3");
