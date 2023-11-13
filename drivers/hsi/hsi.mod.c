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

SYMBOL_CRC(hsi_add_clients_from_dt, 0x3a6ed60f, "_gpl");
SYMBOL_CRC(hsi_alloc_controller, 0x8abd1d6b, "_gpl");
SYMBOL_CRC(hsi_alloc_msg, 0x734ca9f2, "_gpl");
SYMBOL_CRC(hsi_async, 0x843fadc5, "_gpl");
SYMBOL_CRC(hsi_claim_port, 0x67688a26, "_gpl");
SYMBOL_CRC(hsi_event, 0x02b8a191, "_gpl");
SYMBOL_CRC(hsi_free_msg, 0x45885c49, "_gpl");
SYMBOL_CRC(hsi_get_channel_id_by_name, 0xc30d9465, "_gpl");
SYMBOL_CRC(hsi_new_client, 0x7b1f9024, "_gpl");
SYMBOL_CRC(hsi_port_unregister_clients, 0xd4f1e047, "_gpl");
SYMBOL_CRC(hsi_put_controller, 0x9c208a78, "_gpl");
SYMBOL_CRC(hsi_register_client_driver, 0x9c664b8a, "_gpl");
SYMBOL_CRC(hsi_register_controller, 0x6ae07fc5, "_gpl");
SYMBOL_CRC(hsi_register_port_event, 0xd1806c0c, "_gpl");
SYMBOL_CRC(hsi_release_port, 0x2dedd08a, "_gpl");
SYMBOL_CRC(hsi_remove_client, 0xb1e2c343, "_gpl");
SYMBOL_CRC(hsi_unregister_controller, 0xc126bc43, "_gpl");
SYMBOL_CRC(hsi_unregister_port_event, 0x55364d21, "_gpl");
SYMBOL_CRC(hsi_board_list, 0x5210a5bf, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x5a6d5863, "try_module_get" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0xee54f561, "dev_set_name" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8441c8cb, "sg_free_table" },
	{ 0xacaaba89, "device_unregister" },
	{ 0xb312e47e, "device_initialize" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xb46e68b0, "device_for_each_child" },
	{ 0xef6d0a5, "of_get_next_available_child" },
	{ 0xd5ac24e5, "blocking_notifier_chain_register" },
	{ 0x92997ed8, "_printk" },
	{ 0x8805a073, "blocking_notifier_call_chain" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x2c6007e1, "put_device" },
	{ 0x1449535e, "module_put" },
	{ 0xa3ac158f, "sg_alloc_table" },
	{ 0x19d8a156, "of_match_device" },
	{ 0xc17f0d47, "bus_unregister" },
	{ 0xc33aa545, "device_add" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x2513ff15, "of_property_read_string" },
	{ 0x8ebf658, "of_find_property" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xc8d1d2, "device_register" },
	{ 0x1cfee4f1, "device_del" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfb24d4ab, "blocking_notifier_chain_unregister" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xa11be229, "of_modalias_node" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x493867fd, "of_property_read_u32_index" },
	{ 0xddec41ac, "driver_register" },
	{ 0x78502cb1, "of_property_read_string_helper" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xdc7ad0db, "bus_register" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "941E2A06142B4A9BB15953B");
