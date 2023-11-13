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
	{ 0xd3e75977, "sdio_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3b439a1c, "hci_unregister_dev" },
	{ 0x8730615d, "hci_free_dev" },
	{ 0xb8e280d8, "skb_queue_tail" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2919dce9, "skb_queue_purge" },
	{ 0x7df9bde3, "sdio_claim_host" },
	{ 0x2ca0e8b0, "sdio_writeb" },
	{ 0x9c87ac31, "sdio_release_irq" },
	{ 0xebbea969, "sdio_disable_func" },
	{ 0xa16e44e3, "sdio_release_host" },
	{ 0x943df7e9, "sdio_enable_func" },
	{ 0xe387b168, "sdio_claim_irq" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0x735faf6b, "skb_dequeue" },
	{ 0x8b1e3dd1, "skb_push" },
	{ 0x966e341c, "sdio_writesb" },
	{ 0x8978ba7c, "skb_pull" },
	{ 0xf70e9132, "skb_queue_head" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xb64afbf2, "hci_alloc_dev_priv" },
	{ 0x86816953, "hci_register_dev" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xf90ae563, "sdio_unregister_driver" },
	{ 0x923835bf, "sdio_readb" },
	{ 0x79bce59c, "sdio_readsb" },
	{ 0x9aac8012, "__alloc_skb" },
	{ 0xfa941bb7, "skb_put" },
	{ 0xeb02ea03, "hci_recv_frame" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("sdio:c02v*d*");
MODULE_ALIAS("sdio:c03v*d*");
MODULE_ALIAS("sdio:c09v*d*");

MODULE_INFO(srcversion, "714164F30492122374EEF3C");
