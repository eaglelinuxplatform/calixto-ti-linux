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

SYMBOL_CRC(llc_sap_close, 0xbce20c10, "");
SYMBOL_CRC(llc_sap_find, 0xe831b6fe, "");
SYMBOL_CRC(llc_sap_list, 0x52d7b2fd, "");
SYMBOL_CRC(llc_sap_open, 0xa227762c, "");
SYMBOL_CRC(llc_add_pack, 0xa825bc12, "");
SYMBOL_CRC(llc_remove_pack, 0x38b92846, "");
SYMBOL_CRC(llc_set_station_handler, 0x42fa5319, "");
SYMBOL_CRC(llc_build_and_send_ui_pkt, 0x58bebb4c, "");
SYMBOL_CRC(llc_mac_hdr_init, 0xd5f5b104, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xef706529, "consume_skb" },
	{ 0xa30f63fc, "dev_add_pack" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xe61a6643, "__current" },
	{ 0x8978ba7c, "skb_pull" },
	{ 0x7e9acefb, "dev_remove_pack" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0x8b1e3dd1, "skb_push" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x9f24529f, "__pskb_pull_tail" },
	{ 0x407d4405, "__dev_queue_xmit" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x9cc51289, "skb_clone" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x2837f725, "pskb_trim_rcsum_slow" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FD8FA25028FBD9F020DD8FB");
