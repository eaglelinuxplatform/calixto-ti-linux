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
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x1212c326, "i2c_register_driver" },
	{ 0x53d71abb, "regulator_enable" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x4025ec19, "regcache_cache_only" },
	{ 0xa63e30b, "regcache_mark_dirty" },
	{ 0x20e8d66f, "regcache_sync_region" },
	{ 0xbb527231, "regcache_sync" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x9ed8ac9c, "regulator_disable" },
	{ 0xef07e169, "gpiochip_get_data" },
	{ 0x7ca92e2b, "regmap_update_bits_base" },
	{ 0x695b108, "regmap_bulk_write" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4534861e, "regmap_read" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x1aba37c0, "devm_regulator_get" },
	{ 0xe5bf01a, "device_get_match_data" },
	{ 0xd236e21b, "devm_gpiod_get_optional" },
	{ 0xf18bebde, "dev_err_probe" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xf4ec3d1b, "__devm_regmap_init_i2c" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x6954edb1, "devm_gpiochip_add_data_with_key" },
	{ 0x6a639cfa, "regmap_bulk_read" },
	{ 0x18345b8e, "__bitmap_replace" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnxp,pca6408");
MODULE_ALIAS("of:N*T*Cnxp,pca6408C*");
MODULE_ALIAS("of:N*T*Cnxp,pca6416");
MODULE_ALIAS("of:N*T*Cnxp,pca6416C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9505");
MODULE_ALIAS("of:N*T*Cnxp,pca9505C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9506");
MODULE_ALIAS("of:N*T*Cnxp,pca9506C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9534");
MODULE_ALIAS("of:N*T*Cnxp,pca9534C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9535");
MODULE_ALIAS("of:N*T*Cnxp,pca9535C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9536");
MODULE_ALIAS("of:N*T*Cnxp,pca9536C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9537");
MODULE_ALIAS("of:N*T*Cnxp,pca9537C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9538");
MODULE_ALIAS("of:N*T*Cnxp,pca9538C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9539");
MODULE_ALIAS("of:N*T*Cnxp,pca9539C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9554");
MODULE_ALIAS("of:N*T*Cnxp,pca9554C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9555");
MODULE_ALIAS("of:N*T*Cnxp,pca9555C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9556");
MODULE_ALIAS("of:N*T*Cnxp,pca9556C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9557");
MODULE_ALIAS("of:N*T*Cnxp,pca9557C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9574");
MODULE_ALIAS("of:N*T*Cnxp,pca9574C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9575");
MODULE_ALIAS("of:N*T*Cnxp,pca9575C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9698");
MODULE_ALIAS("of:N*T*Cnxp,pca9698C*");
MODULE_ALIAS("of:N*T*Cnxp,pcal6408");
MODULE_ALIAS("of:N*T*Cnxp,pcal6408C*");
MODULE_ALIAS("of:N*T*Cnxp,pcal6416");
MODULE_ALIAS("of:N*T*Cnxp,pcal6416C*");
MODULE_ALIAS("of:N*T*Cnxp,pcal6524");
MODULE_ALIAS("of:N*T*Cnxp,pcal6524C*");
MODULE_ALIAS("of:N*T*Cnxp,pcal6534");
MODULE_ALIAS("of:N*T*Cnxp,pcal6534C*");
MODULE_ALIAS("of:N*T*Cnxp,pcal9535");
MODULE_ALIAS("of:N*T*Cnxp,pcal9535C*");
MODULE_ALIAS("of:N*T*Cnxp,pcal9554b");
MODULE_ALIAS("of:N*T*Cnxp,pcal9554bC*");
MODULE_ALIAS("of:N*T*Cnxp,pcal9555a");
MODULE_ALIAS("of:N*T*Cnxp,pcal9555aC*");
MODULE_ALIAS("of:N*T*Cmaxim,max7310");
MODULE_ALIAS("of:N*T*Cmaxim,max7310C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7312");
MODULE_ALIAS("of:N*T*Cmaxim,max7312C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7313");
MODULE_ALIAS("of:N*T*Cmaxim,max7313C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7315");
MODULE_ALIAS("of:N*T*Cmaxim,max7315C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7318");
MODULE_ALIAS("of:N*T*Cmaxim,max7318C*");
MODULE_ALIAS("of:N*T*Cti,pca6107");
MODULE_ALIAS("of:N*T*Cti,pca6107C*");
MODULE_ALIAS("of:N*T*Cti,pca9536");
MODULE_ALIAS("of:N*T*Cti,pca9536C*");
MODULE_ALIAS("of:N*T*Cti,tca6408");
MODULE_ALIAS("of:N*T*Cti,tca6408C*");
MODULE_ALIAS("of:N*T*Cti,tca6416");
MODULE_ALIAS("of:N*T*Cti,tca6416C*");
MODULE_ALIAS("of:N*T*Cti,tca6424");
MODULE_ALIAS("of:N*T*Cti,tca6424C*");
MODULE_ALIAS("of:N*T*Cti,tca9539");
MODULE_ALIAS("of:N*T*Cti,tca9539C*");
MODULE_ALIAS("of:N*T*Connn,cat9554");
MODULE_ALIAS("of:N*T*Connn,cat9554C*");
MODULE_ALIAS("of:N*T*Connn,pca9654");
MODULE_ALIAS("of:N*T*Connn,pca9654C*");
MODULE_ALIAS("of:N*T*Connn,pca9655");
MODULE_ALIAS("of:N*T*Connn,pca9655C*");
MODULE_ALIAS("of:N*T*Cexar,xra1202");
MODULE_ALIAS("of:N*T*Cexar,xra1202C*");
MODULE_ALIAS("acpi*:INT3491:*");
MODULE_ALIAS("i2c:pca6408");
MODULE_ALIAS("i2c:pca6416");
MODULE_ALIAS("i2c:pca9505");
MODULE_ALIAS("i2c:pca9506");
MODULE_ALIAS("i2c:pca9534");
MODULE_ALIAS("i2c:pca9535");
MODULE_ALIAS("i2c:pca9536");
MODULE_ALIAS("i2c:pca9537");
MODULE_ALIAS("i2c:pca9538");
MODULE_ALIAS("i2c:pca9539");
MODULE_ALIAS("i2c:pca9554");
MODULE_ALIAS("i2c:pca9555");
MODULE_ALIAS("i2c:pca9556");
MODULE_ALIAS("i2c:pca9557");
MODULE_ALIAS("i2c:pca9574");
MODULE_ALIAS("i2c:pca9575");
MODULE_ALIAS("i2c:pca9698");
MODULE_ALIAS("i2c:pcal6408");
MODULE_ALIAS("i2c:pcal6416");
MODULE_ALIAS("i2c:pcal6524");
MODULE_ALIAS("i2c:pcal6534");
MODULE_ALIAS("i2c:pcal9535");
MODULE_ALIAS("i2c:pcal9554b");
MODULE_ALIAS("i2c:pcal9555a");
MODULE_ALIAS("i2c:max7310");
MODULE_ALIAS("i2c:max7312");
MODULE_ALIAS("i2c:max7313");
MODULE_ALIAS("i2c:max7315");
MODULE_ALIAS("i2c:max7318");
MODULE_ALIAS("i2c:pca6107");
MODULE_ALIAS("i2c:tca6408");
MODULE_ALIAS("i2c:tca6416");
MODULE_ALIAS("i2c:tca6424");
MODULE_ALIAS("i2c:tca9539");
MODULE_ALIAS("i2c:tca9554");
MODULE_ALIAS("i2c:xra1202");

MODULE_INFO(srcversion, "A27441923BB679896ABAD4C");
