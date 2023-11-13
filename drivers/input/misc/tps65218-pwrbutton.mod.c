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
	{ 0xcb99963, "__platform_driver_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x4534861e, "regmap_read" },
	{ 0xfea15b62, "input_event" },
	{ 0xb391754c, "pm_wakeup_dev_event" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xe9f55364, "of_match_node" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xe08ffaa9, "devm_input_allocate_device" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x87249862, "input_set_capability" },
	{ 0x347fb59d, "dev_get_regmap" },
	{ 0x7c375e08, "device_set_wakeup_capable" },
	{ 0x137a017f, "device_wakeup_enable" },
	{ 0x48ab7808, "platform_get_irq" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0xf70284f2, "input_register_device" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:tps65218-pwrbutton");
MODULE_ALIAS("platform:tps65217-pwrbutton");
MODULE_ALIAS("of:N*T*Cti,tps65217-pwrbutton");
MODULE_ALIAS("of:N*T*Cti,tps65217-pwrbuttonC*");
MODULE_ALIAS("of:N*T*Cti,tps65218-pwrbutton");
MODULE_ALIAS("of:N*T*Cti,tps65218-pwrbuttonC*");

MODULE_INFO(srcversion, "8B054A51E361F149B085AE1");
