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
	{ 0xfa941bb7, "skb_put" },
	{ 0xef706529, "consume_skb" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6bb06b5d, "unregister_netdev" },
	{ 0x73901f82, "usb_interface_id" },
	{ 0x58abdfaf, "usb_assign_descriptors" },
	{ 0xa4d05df0, "skb_add_rx_frag" },
	{ 0x37a0cba, "kfree" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x94565d24, "usb_ep_free_request" },
	{ 0x1a63f58d, "config_ep_by_speed" },
	{ 0x9f77ed8, "dev_addr_mod" },
	{ 0xa1971662, "alloc_netdev_mqs" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x4398cb52, "usb_function_register" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x9449eb2a, "config_group_init_type_name" },
	{ 0x409cf0a0, "__dev_kfree_skb_irq" },
	{ 0xbb438e8c, "register_netdev" },
	{ 0xe6cffcf9, "free_netdev" },
	{ 0xb76cb41a, "usb_ep_autoconfig" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xf248f58c, "usb_put_function_instance" },
	{ 0x2d3d94d6, "netif_tx_wake_queue" },
	{ 0x7218e9a9, "__alloc_pages" },
	{ 0x89e4c154, "phonet_header_ops" },
	{ 0xf758551a, "netif_rx" },
	{ 0xfe94257b, "__netdev_alloc_skb" },
	{ 0xb9b5f687, "usb_function_unregister" },
	{ 0xe9140521, "usb_ep_alloc_request" },
	{ 0xeac571dd, "gether_get_ifname" },
	{ 0xcfb8ae07, "__dev_kfree_skb_any" },
	{ 0xa8a6e1f8, "__folio_put" },
	{ 0xf16731f3, "netif_carrier_off" },
	{ 0xf278f519, "netif_carrier_on" },
	{ 0xc848d8dc, "usb_ep_queue" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xea07d716, "page_address" },
	{ 0x9a13d16, "usb_ep_enable" },
	{ 0xbace3461, "usb_ep_disable" },
	{ 0xf149391d, "usb_free_all_descriptors" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "libcomposite,udc-core,phonet,u_ether");


MODULE_INFO(srcversion, "4811655441BF07A8AB4B782");
