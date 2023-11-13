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

SYMBOL_CRC(__serio_register_driver, 0x72ce3ad8, "");
SYMBOL_CRC(__serio_register_port, 0xa551abd4, "");
SYMBOL_CRC(serio_bus, 0x8f504b2c, "");
SYMBOL_CRC(serio_close, 0x857cd655, "");
SYMBOL_CRC(serio_interrupt, 0x593747a2, "");
SYMBOL_CRC(serio_open, 0xadac6407, "");
SYMBOL_CRC(serio_reconnect, 0x1e3e7978, "");
SYMBOL_CRC(serio_rescan, 0x05bd2e70, "");
SYMBOL_CRC(serio_unregister_child_port, 0x90c0d71a, "");
SYMBOL_CRC(serio_unregister_driver, 0x51828146, "");
SYMBOL_CRC(serio_unregister_port, 0x2ce46c1f, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x1449535e, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x5a6d5863, "try_module_get" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x92997ed8, "_printk" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x84b183ae, "strncmp" },
	{ 0xddec41ac, "driver_register" },
	{ 0xbb4f160b, "driver_unregister" },
	{ 0xdc7ad0db, "bus_register" },
	{ 0xc17f0d47, "bus_unregister" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x47c9369a, "__module_get" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xb312e47e, "device_initialize" },
	{ 0xee54f561, "dev_set_name" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x2c6007e1, "put_device" },
	{ 0x1cfee4f1, "device_del" },
	{ 0xe6f84149, "device_release_driver" },
	{ 0x329ed743, "device_attach" },
	{ 0xcedc99af, "mutex_lock_interruptible" },
	{ 0xd6c6ce81, "driver_find" },
	{ 0x7875340b, "device_bind_driver" },
	{ 0xa90e5e16, "driver_attach" },
	{ 0xc33aa545, "device_add" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "29FA3592EB82E8388368FAA");
