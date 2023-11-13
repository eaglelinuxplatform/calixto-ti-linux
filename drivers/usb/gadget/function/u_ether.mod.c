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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(gether_cleanup, 0x8878cfa6, "_gpl");
SYMBOL_CRC(gether_connect, 0xdc497f9d, "_gpl");
SYMBOL_CRC(gether_disconnect, 0x9a1a2609, "_gpl");
SYMBOL_CRC(gether_get_dev_addr, 0xcbbd9ca6, "_gpl");
SYMBOL_CRC(gether_get_host_addr, 0xc26ab8c1, "_gpl");
SYMBOL_CRC(gether_get_host_addr_cdc, 0x1a68e2c6, "_gpl");
SYMBOL_CRC(gether_get_host_addr_u8, 0x056214fa, "_gpl");
SYMBOL_CRC(gether_get_ifname, 0xeac571dd, "_gpl");
SYMBOL_CRC(gether_get_qmult, 0x874724a1, "_gpl");
SYMBOL_CRC(gether_register_netdev, 0xb549ee7c, "_gpl");
SYMBOL_CRC(gether_set_dev_addr, 0x5aa641ab, "_gpl");
SYMBOL_CRC(gether_set_gadget, 0x49d490c1, "_gpl");
SYMBOL_CRC(gether_set_host_addr, 0xbe1e966a, "_gpl");
SYMBOL_CRC(gether_set_ifname, 0x4a9661ec, "_gpl");
SYMBOL_CRC(gether_set_qmult, 0x341cc811, "_gpl");
SYMBOL_CRC(gether_setup_name, 0xb72b9245, "_gpl");
SYMBOL_CRC(gether_setup_name_default, 0xdb2fdce4, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xeea0399, "strscpy" },
	{ 0x9f77ed8, "dev_addr_mod" },
	{ 0xbb438e8c, "register_netdev" },
	{ 0xd37e9c2, "_dev_printk" },
	{ 0x92997ed8, "_printk" },
	{ 0xf16731f3, "netif_carrier_off" },
	{ 0x97255bdf, "strlen" },
	{ 0x11089ac7, "_ctype" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x349cba85, "strchr" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x328a05f1, "strncpy" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe9140521, "usb_ep_alloc_request" },
	{ 0x94565d24, "usb_ep_free_request" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xbace3461, "usb_ep_disable" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x6bb06b5d, "unregister_netdev" },
	{ 0x92b57248, "flush_work" },
	{ 0xe6cffcf9, "free_netdev" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xfe94257b, "__netdev_alloc_skb" },
	{ 0xc848d8dc, "usb_ep_queue" },
	{ 0xcfb8ae07, "__dev_kfree_skb_any" },
	{ 0x2d3d94d6, "netif_tx_wake_queue" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x44ce35dc, "alloc_etherdev_mqs" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x9a13d16, "usb_ep_enable" },
	{ 0xf278f519, "netif_carrier_on" },
	{ 0xfa941bb7, "skb_put" },
	{ 0x735faf6b, "skb_dequeue" },
	{ 0xa3f30645, "eth_type_trans" },
	{ 0xf758551a, "netif_rx" },
	{ 0xb8e280d8, "skb_queue_tail" },
	{ 0xb4fc417d, "eth_mac_addr" },
	{ 0x67669b9f, "eth_validate_addr" },
	{ 0xc765e4fe, "ethtool_op_get_link" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "udc-core");


MODULE_INFO(srcversion, "8BD9F41557CDDD6E9E5E51C");
