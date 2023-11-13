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

SYMBOL_CRC(register_snap_client, 0xd9b09122, "");
SYMBOL_CRC(unregister_snap_client, 0x3d044bcf, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa227762c, "llc_sap_open" },
	{ 0x92997ed8, "_printk" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8b1e3dd1, "skb_push" },
	{ 0x58bebb4c, "llc_build_and_send_ui_pkt" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x37a0cba, "kfree" },
	{ 0x71c90087, "memcmp" },
	{ 0x6cf91262, "skb_pull_rcsum" },
	{ 0x9f24529f, "__pskb_pull_tail" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0xbce20c10, "llc_sap_close" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "llc");


MODULE_INFO(srcversion, "2C96DF8FCE99F86E0EEE474");
