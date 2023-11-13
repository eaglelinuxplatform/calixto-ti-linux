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
	{ 0x1212c326, "i2c_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3a3ea23b, "lp55xx_write" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x1709b7a9, "lp55xx_update_bits" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xa99db34b, "lp55xx_read" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xcc5879da, "lp55xx_init_device" },
	{ 0x9f62537d, "lp55xx_of_populate_pdata" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x2fbc0982, "lp55xx_register_leds" },
	{ 0x470fdc46, "lp55xx_deinit_device" },
	{ 0xc65d965c, "lp55xx_register_sysfs" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0x668b595, "_kstrtoul" },
	{ 0x43180bfd, "lp55xx_unregister_sysfs" },
	{ 0x84b183ae, "strncmp" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "leds-lp55xx-common");

MODULE_ALIAS("of:N*T*Cnational,lp5523");
MODULE_ALIAS("of:N*T*Cnational,lp5523C*");
MODULE_ALIAS("of:N*T*Cti,lp55231");
MODULE_ALIAS("of:N*T*Cti,lp55231C*");
MODULE_ALIAS("i2c:lp5523");
MODULE_ALIAS("i2c:lp55231");

MODULE_INFO(srcversion, "711250A727785A34E44541F");
