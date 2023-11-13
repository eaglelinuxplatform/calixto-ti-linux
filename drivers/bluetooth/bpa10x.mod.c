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
	{ 0x52c9ee7b, "usb_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3b439a1c, "hci_unregister_dev" },
	{ 0x8730615d, "hci_free_dev" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0xc48a8a57, "__hci_cmd_sync" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0xd30a346c, "usb_alloc_urb" },
	{ 0x8b1e3dd1, "skb_push" },
	{ 0xd7f575dd, "usb_free_urb" },
	{ 0x7439b55a, "usb_anchor_urb" },
	{ 0x993f0de1, "usb_submit_urb" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x1414da88, "usb_unanchor_urb" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x718b8b7, "bt_info" },
	{ 0x538bff85, "hci_set_fw_info" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0xa6fa3c0c, "usb_deregister" },
	{ 0xfa941bb7, "skb_put" },
	{ 0x9d669763, "memcpy" },
	{ 0x9aac8012, "__alloc_skb" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x5f754e5a, "memset" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xb64afbf2, "hci_alloc_dev_priv" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x86816953, "hci_register_dev" },
	{ 0xeb02ea03, "hci_recv_frame" },
	{ 0x10c384db, "hci_recv_diag" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usbcore,bluetooth");

MODULE_ALIAS("usb:v08FDp0002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BF51CB52DB71FAB2B1CE0D5");
