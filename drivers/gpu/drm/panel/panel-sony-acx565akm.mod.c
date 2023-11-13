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
	{ 0xa2669883, "__spi_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb60f9287, "drm_panel_remove" },
	{ 0xa10b7627, "drm_panel_disable" },
	{ 0xa35355c0, "drm_panel_unprepare" },
	{ 0xf08a1869, "backlight_device_unregister" },
	{ 0x4b711b3d, "sysfs_remove_group" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5f754e5a, "memset" },
	{ 0x582f4d93, "spi_sync" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x200a776d, "drm_mode_duplicate" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x2ae8b72c, "drm_mode_probed_add" },
	{ 0xbb4f160b, "driver_unregister" },
	{ 0x84b183ae, "strncmp" },
	{ 0x97255bdf, "strlen" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x301d3b5, "devm_gpiod_get" },
	{ 0x1660b4d, "gpiod_set_value" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x2e82f96a, "backlight_device_register" },
	{ 0x8dff396f, "drm_panel_init" },
	{ 0xf1cd82ff, "drm_panel_add" },
	{ 0x1b579ffe, "sysfs_create_group" },
	{ 0xe61a6643, "__current" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "drm");

MODULE_ALIAS("spi:acx565akm");
MODULE_ALIAS("of:N*T*Csony,acx565akm");
MODULE_ALIAS("of:N*T*Csony,acx565akmC*");

MODULE_INFO(srcversion, "1EEF1E64072C79298F23F40");
