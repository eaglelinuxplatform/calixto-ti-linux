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
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x52c9ee7b, "usb_register_driver" },
	{ 0x2ab8fd87, "usb_driver_release_interface" },
	{ 0x6bb06b5d, "unregister_netdev" },
	{ 0xc6ba13e6, "cdc_parse_cdc_header" },
	{ 0xeed58c47, "usb_ifnum_to_if" },
	{ 0xa1971662, "alloc_netdev_mqs" },
	{ 0xf368ce6b, "usb_driver_claim_interface" },
	{ 0xe6cffcf9, "free_netdev" },
	{ 0x357e9105, "usb_set_interface" },
	{ 0xbb438e8c, "register_netdev" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x2d3d94d6, "netif_tx_wake_queue" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xcfb8ae07, "__dev_kfree_skb_any" },
	{ 0xd7f575dd, "usb_free_urb" },
	{ 0xef706529, "consume_skb" },
	{ 0xd30a346c, "usb_alloc_urb" },
	{ 0x993f0de1, "usb_submit_urb" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x67a16781, "usb_kill_urb" },
	{ 0x9f77ed8, "dev_addr_mod" },
	{ 0x89e4c154, "phonet_header_ops" },
	{ 0xa6fa3c0c, "usb_deregister" },
	{ 0x7218e9a9, "__alloc_pages" },
	{ 0xea07d716, "page_address" },
	{ 0xa8a6e1f8, "__folio_put" },
	{ 0xa4d05df0, "skb_add_rx_frag" },
	{ 0xfe94257b, "__netdev_alloc_skb" },
	{ 0xfa941bb7, "skb_put" },
	{ 0xf758551a, "netif_rx" },
	{ 0x9fafa4fb, "mem_map" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usbcore,phonet");

MODULE_ALIAS("usb:v0421p*d*dc*dsc*dp*ic02iscFEip*in*");

MODULE_INFO(srcversion, "6191E14A77A994D70D5F936");
