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

SYMBOL_CRC(wkup_m3_ipc_get, 0x0a38534e, "_gpl");
SYMBOL_CRC(wkup_m3_ipc_put, 0x5fd609a5, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x51943974, "get_device" },
	{ 0x2c6007e1, "put_device" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0xc1f21571, "rproc_shutdown" },
	{ 0x16207051, "rproc_boot" },
	{ 0x8e9e820e, "debugfs_remove" },
	{ 0x68c5bd41, "mbox_free_channel" },
	{ 0x132bf7aa, "rproc_put" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xc2d5517a, "mbox_send_message" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0xcaf8a897, "mbox_client_txdone" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xaeb1556b, "rproc_da_to_va" },
	{ 0x9d669763, "memcpy" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x826781f6, "platform_get_resource" },
	{ 0x600e4576, "devm_ioremap_resource" },
	{ 0x48ab7808, "platform_get_irq" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0x18497c8d, "mbox_request_channel" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0xc8d40425, "rproc_get_by_phandle" },
	{ 0x8ebf658, "of_find_property" },
	{ 0x2513ff15, "of_property_read_string" },
	{ 0xf1908dde, "kthread_create_on_node" },
	{ 0xe4296f92, "wake_up_process" },
	{ 0xeca42068, "debugfs_create_dir" },
	{ 0xa81f2ce4, "debugfs_create_file" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x5bfd598c, "simple_attr_open" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xdb9788a6, "request_firmware_nowait" },
	{ 0xc37335b0, "complete" },
	{ 0x36fdd5b3, "generic_file_llseek" },
	{ 0x74141ad, "simple_attr_read" },
	{ 0x5aabdf37, "simple_attr_write" },
	{ 0x7a339792, "simple_attr_release" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,am3352-wkup-m3-ipc");
MODULE_ALIAS("of:N*T*Cti,am3352-wkup-m3-ipcC*");
MODULE_ALIAS("of:N*T*Cti,am4372-wkup-m3-ipc");
MODULE_ALIAS("of:N*T*Cti,am4372-wkup-m3-ipcC*");

MODULE_INFO(srcversion, "FE97B0D247F28869348A2B0");
