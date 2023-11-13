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

SYMBOL_CRC(rndis_borrow_net, 0xdd05aff7, "_gpl");
SYMBOL_CRC(rndis_add_hdr, 0x8e83560d, "_gpl");
SYMBOL_CRC(rndis_deregister, 0x69ccc20d, "_gpl");
SYMBOL_CRC(rndis_free_response, 0x0d796e08, "_gpl");
SYMBOL_CRC(rndis_get_next_response, 0x97ce8b59, "_gpl");
SYMBOL_CRC(rndis_msg_parser, 0xc035cc5e, "_gpl");
SYMBOL_CRC(rndis_register, 0xc6ee6272, "_gpl");
SYMBOL_CRC(rndis_rm_hdr, 0x95d89ad5, "_gpl");
SYMBOL_CRC(rndis_set_host_mac, 0xc59ad360, "_gpl");
SYMBOL_CRC(rndis_set_param_dev, 0x01602640, "_gpl");
SYMBOL_CRC(rndis_set_param_medium, 0xe3b3a54f, "_gpl");
SYMBOL_CRC(rndis_set_param_vendor, 0x2b74c98a, "_gpl");
SYMBOL_CRC(rndis_signal_connect, 0x2c56770b, "_gpl");
SYMBOL_CRC(rndis_signal_disconnect, 0x396ba8f1, "_gpl");
SYMBOL_CRC(rndis_uninit, 0x719f4ad3, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa5684076, "ida_alloc_range" },
	{ 0x81680f7c, "dev_get_stats" },
	{ 0x6f7cfc84, "usb_os_desc_prepare_interf_dir" },
	{ 0xef706529, "consume_skb" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x73901f82, "usb_interface_id" },
	{ 0x58abdfaf, "usb_assign_descriptors" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x74d4d69, "seq_lseek" },
	{ 0x59451080, "proc_create_data" },
	{ 0x9a1a2609, "gether_disconnect" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x94565d24, "usb_ep_free_request" },
	{ 0x1a63f58d, "config_ep_by_speed" },
	{ 0x5aa641ab, "gether_set_dev_addr" },
	{ 0x92997ed8, "_printk" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xb549ee7c, "gether_register_netdev" },
	{ 0xe61a6643, "__current" },
	{ 0xb8e280d8, "skb_queue_tail" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x4398cb52, "usb_function_register" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x8978ba7c, "skb_pull" },
	{ 0x56214fa, "gether_get_host_addr_u8" },
	{ 0x341cc811, "gether_set_qmult" },
	{ 0x9449eb2a, "config_group_init_type_name" },
	{ 0xc26ab8c1, "gether_get_host_addr" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x8b1e3dd1, "skb_push" },
	{ 0x49d490c1, "gether_set_gadget" },
	{ 0xa24491bf, "ida_free" },
	{ 0xe6cffcf9, "free_netdev" },
	{ 0xb76cb41a, "usb_ep_autoconfig" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xf248f58c, "usb_put_function_instance" },
	{ 0x2d3d94d6, "netif_tx_wake_queue" },
	{ 0xdc497f9d, "gether_connect" },
	{ 0x5f754e5a, "memset" },
	{ 0xcbbd9ca6, "gether_get_dev_addr" },
	{ 0xbe1e966a, "gether_set_host_addr" },
	{ 0xabc58048, "skb_trim" },
	{ 0xb825d8f6, "seq_read" },
	{ 0xb9b5f687, "usb_function_unregister" },
	{ 0x8878cfa6, "gether_cleanup" },
	{ 0xecdbbd5c, "skb_realloc_headroom" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe9140521, "usb_ep_alloc_request" },
	{ 0xeac571dd, "gether_get_ifname" },
	{ 0x28118cb6, "__get_user_1" },
	{ 0x4a9661ec, "gether_set_ifname" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xcfb8ae07, "__dev_kfree_skb_any" },
	{ 0x16d5c4d0, "remove_proc_entry" },
	{ 0xf16731f3, "netif_carrier_off" },
	{ 0x4418ca21, "seq_printf" },
	{ 0xf278f519, "netif_carrier_on" },
	{ 0x34937f96, "single_release" },
	{ 0xdb2fdce4, "gether_setup_name_default" },
	{ 0xc848d8dc, "usb_ep_queue" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x874724a1, "gether_get_qmult" },
	{ 0x97255bdf, "strlen" },
	{ 0x9a13d16, "usb_ep_enable" },
	{ 0xbace3461, "usb_ep_disable" },
	{ 0xd37e9c2, "_dev_printk" },
	{ 0xf01014b6, "single_open" },
	{ 0xf149391d, "usb_free_all_descriptors" },
	{ 0xe6b0291, "usb_gstrings_attach" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "libcomposite,u_ether,udc-core");


MODULE_INFO(srcversion, "1DF8CC173CC85EDF7CB3EA0");
