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
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x1ef5f828, "input_unregister_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xfea15b62, "input_event" },
	{ 0xb391754c, "pm_wakeup_dev_event" },
	{ 0xea4a09cb, "mod_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x1e3555c7, "input_allocate_device" },
	{ 0x87249862, "input_set_capability" },
	{ 0x7ca92e2b, "regmap_update_bits_base" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x48ab7808, "platform_get_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf70284f2, "input_register_device" },
	{ 0x7c375e08, "device_set_wakeup_capable" },
	{ 0x137a017f, "device_wakeup_enable" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x65f6c7ea, "input_free_device" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x4534861e, "regmap_read" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,palmas-pwrbutton");
MODULE_ALIAS("of:N*T*Cti,palmas-pwrbuttonC*");

MODULE_INFO(srcversion, "A6968183A69F15260FFF4FB");
