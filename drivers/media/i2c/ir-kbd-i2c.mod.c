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
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x62c6484b, "i2c_unregister_device" },
	{ 0xd2d4df84, "rc_unregister_device" },
	{ 0x9d669763, "memcpy" },
	{ 0x2f4a0dbf, "i2c_transfer_buffer_flags" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xfd0f592, "mutex_trylock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x35d8d268, "rc_keydown" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf58bc2a5, "i2c_transfer" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xdb7faa46, "rc_allocate_device" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15aafeb7, "i2c_new_dummy_device" },
	{ 0x5f754e5a, "memset" },
	{ 0x2efd122e, "rc_register_device" },
	{ 0xe8577329, "rc_free_device" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x71c90087, "memcmp" },
	{ 0xcedc99af, "mutex_lock_interruptible" },
	{ 0xe61a6643, "__current" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xe4ea4aab, "param_ops_bool" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("i2c:ir_video");
MODULE_ALIAS("i2c:ir_z8f0811_haup");
MODULE_ALIAS("i2c:ir_z8f0811_hdpvr");

MODULE_INFO(srcversion, "02FF199A4E5423FC2857995");
