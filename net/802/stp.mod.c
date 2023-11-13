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

SYMBOL_CRC(stp_proto_register, 0xcf523f43, "_gpl");
SYMBOL_CRC(stp_proto_unregister, 0x3bfd8286, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xa227762c, "llc_sap_open" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xbce20c10, "llc_sap_close" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "llc");


MODULE_INFO(srcversion, "6AEBB72A8A6FF2BF9226E29");
