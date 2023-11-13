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
	{ 0xa226dbe8, "cpcap_sense_virq" },
	{ 0xb391754c, "pm_wakeup_dev_event" },
	{ 0xfea15b62, "input_event" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x48ab7808, "platform_get_irq" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xe08ffaa9, "devm_input_allocate_device" },
	{ 0x347fb59d, "dev_get_regmap" },
	{ 0x87249862, "input_set_capability" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0xf70284f2, "input_register_device" },
	{ 0x7c375e08, "device_set_wakeup_capable" },
	{ 0x137a017f, "device_wakeup_enable" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmotorola,cpcap-pwrbutton");
MODULE_ALIAS("of:N*T*Cmotorola,cpcap-pwrbuttonC*");

MODULE_INFO(srcversion, "196947ACC034FB081A6CED5");
