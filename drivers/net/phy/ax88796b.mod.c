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
	{ 0x84a35b59, "phy_drivers_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb2b9ea3b, "mdiobus_write" },
	{ 0x66ed94cb, "genphy_soft_reset" },
	{ 0x76037b45, "phy_drivers_unregister" },
	{ 0xfd9857e0, "phy_init_hw" },
	{ 0xa1adc4aa, "phy_start_aneg" },
	{ 0x6eb25cbb, "genphy_update_link" },
	{ 0x390360ab, "mdiobus_read" },
	{ 0x509a90a1, "genphy_read_lpa" },
	{ 0xaa044a6b, "phy_resolve_aneg_linkmode" },
	{ 0xec55c4e2, "genphy_suspend" },
	{ 0x3f616804, "genphy_resume" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:00000000001110110001100001100001");
MODULE_ALIAS("mdio:00000000001110110001100010000001");
MODULE_ALIAS("mdio:0000000000111011000110000100????");

MODULE_INFO(srcversion, "9C5FBC9EFAE0F3C543A5C0D");
