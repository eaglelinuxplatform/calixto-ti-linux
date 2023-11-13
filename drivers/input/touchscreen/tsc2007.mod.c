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
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x49970de8, "finish_wait" },
	{ 0xe08ffaa9, "devm_input_allocate_device" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x4a90394f, "gpiod_get_value" },
	{ 0xd236e21b, "devm_gpiod_get_optional" },
	{ 0x637493f3, "__wake_up" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf70284f2, "input_register_device" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xcf1ab7a4, "device_property_read_u32_array" },
	{ 0x4091ed3e, "devm_add_action" },
	{ 0x1212c326, "i2c_register_driver" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x87249862, "input_set_capability" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xd00270c6, "i2c_smbus_read_word_data" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xfea15b62, "input_event" },
	{ 0xf4b02d60, "device_property_read_u64_array" },
	{ 0x4add0103, "input_set_abs_params" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:tsc2007");
MODULE_ALIAS("of:N*T*Cti,tsc2007");
MODULE_ALIAS("of:N*T*Cti,tsc2007C*");

MODULE_INFO(srcversion, "B31574E485E005DF96B2F57");
