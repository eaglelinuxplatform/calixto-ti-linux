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

SYMBOL_CRC(lib80211_crypt_delayed_deinit, 0xc6934d75, "");
SYMBOL_CRC(lib80211_crypt_info_free, 0x1d6ed6a7, "");
SYMBOL_CRC(lib80211_crypt_info_init, 0xc5951b9b, "");
SYMBOL_CRC(lib80211_get_crypto_ops, 0x284da643, "");
SYMBOL_CRC(lib80211_register_crypto_ops, 0xde348023, "");
SYMBOL_CRC(lib80211_unregister_crypto_ops, 0xc37d2a54, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x5f754e5a, "memset" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x24d273d1, "add_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x1449535e, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x92997ed8, "_printk" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1852F8AD91D6BE1E1EF504B");
