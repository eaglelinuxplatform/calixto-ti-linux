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

SYMBOL_CRC(omap_mbox_disable_irq, 0x08547224, "");
SYMBOL_CRC(omap_mbox_enable_irq, 0x2488a8bf, "");
SYMBOL_CRC(omap_mbox_request_channel, 0xde8ff800, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x9574b7b2, "__class_register" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0xc787f3c5, "class_unregister" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xacaaba89, "device_unregister" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0xa8ceeabf, "of_find_node_by_phandle" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x92997ed8, "_printk" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x7891c57c, "mbox_chan_received_data" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xd39fa6ab, "__kfifo_alloc" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x5ec1a11d, "of_device_get_match_data" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0xef6d0a5, "of_get_next_available_child" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x8ebf658, "of_find_property" },
	{ 0xef441af3, "devm_platform_ioremap_resource" },
	{ 0x48ab7808, "platform_get_irq" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xf66696c7, "device_create" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x45962907, "devm_kfree" },
	{ 0x4a316ae6, "devm_mbox_controller_register" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x68c5bd41, "mbox_free_channel" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x92b57248, "flush_work" },
	{ 0xf9efdb84, "mbox_chan_txdone" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9098ac8b, "param_ops_uint" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,omap2-mailbox");
MODULE_ALIAS("of:N*T*Cti,omap2-mailboxC*");
MODULE_ALIAS("of:N*T*Cti,omap3-mailbox");
MODULE_ALIAS("of:N*T*Cti,omap3-mailboxC*");
MODULE_ALIAS("of:N*T*Cti,omap4-mailbox");
MODULE_ALIAS("of:N*T*Cti,omap4-mailboxC*");
MODULE_ALIAS("of:N*T*Cti,am654-mailbox");
MODULE_ALIAS("of:N*T*Cti,am654-mailboxC*");
MODULE_ALIAS("of:N*T*Cti,am64-mailbox");
MODULE_ALIAS("of:N*T*Cti,am64-mailboxC*");

MODULE_INFO(srcversion, "4628ECFCEB8D7EC9D0F5CB9");
