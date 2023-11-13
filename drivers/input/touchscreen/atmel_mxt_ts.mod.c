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
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x1212c326, "i2c_register_driver" },
	{ 0xf58bc2a5, "i2c_transfer" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xfea15b62, "input_event" },
	{ 0x2dbb0fa9, "input_mt_report_slot_state" },
	{ 0xc37335b0, "complete" },
	{ 0xd38f1873, "input_mt_report_pointer_emulation" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7b9a90c4, "irq_get_irq_data" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x9d669763, "memcpy" },
	{ 0x2f4a0dbf, "i2c_transfer_buffer_flags" },
	{ 0x9135dba6, "wait_for_completion_interruptible_timeout" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xdf36b4fe, "input_device_enabled" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x1660b4d, "gpiod_set_value" },
	{ 0x4b711b3d, "sysfs_remove_group" },
	{ 0x1ef5f828, "input_unregister_device" },
	{ 0xaec8450f, "regulator_bulk_disable" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3560e651, "kmemdup_nul" },
	{ 0x84b183ae, "strncmp" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x1e3555c7, "input_allocate_device" },
	{ 0x87249862, "input_set_capability" },
	{ 0x4add0103, "input_set_abs_params" },
	{ 0x9839cd76, "input_mt_init_slots" },
	{ 0x65f6c7ea, "input_free_device" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0xceeb322b, "input_alloc_absinfo" },
	{ 0xf70284f2, "input_register_device" },
	{ 0x421d4dcf, "krealloc" },
	{ 0xdb9788a6, "request_firmware_nowait" },
	{ 0xfe5eb6e6, "request_firmware" },
	{ 0xc8c63ab0, "device_property_present" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xc4ccdd64, "devm_regulator_bulk_get" },
	{ 0xd236e21b, "devm_gpiod_get_optional" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0x1113200c, "regulator_bulk_enable" },
	{ 0xcf1ab7a4, "device_property_read_u32_array" },
	{ 0x1b579ffe, "sysfs_create_group" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:qt602240_ts");
MODULE_ALIAS("i2c:atmel_mxt_ts");
MODULE_ALIAS("i2c:atmel_mxt_tp");
MODULE_ALIAS("i2c:maxtouch");
MODULE_ALIAS("i2c:mXT224");
MODULE_ALIAS("of:N*T*Catmel,maxtouch");
MODULE_ALIAS("of:N*T*Catmel,maxtouchC*");
MODULE_ALIAS("of:N*T*Catmel,qt602240_ts");
MODULE_ALIAS("of:N*T*Catmel,qt602240_tsC*");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_ts");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_tsC*");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_tp");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_tpC*");
MODULE_ALIAS("of:N*T*Catmel,mXT224");
MODULE_ALIAS("of:N*T*Catmel,mXT224C*");

MODULE_INFO(srcversion, "04AE575A56AB58879C2A0F0");
