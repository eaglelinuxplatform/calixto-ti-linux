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
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x802c9f51, "ahci_platform_get_resources" },
	{ 0xca6dbf7, "ahci_platform_enable_resources" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xb7ea3de4, "ahci_platform_disable_resources" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x2afd524f, "ahci_platform_init_host" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xe07e5f47, "ahci_do_softreset" },
	{ 0x82d2e8fa, "ahci_check_ready" },
	{ 0x286be8f0, "ahci_platform_suspend" },
	{ 0x4f4327b1, "ahci_platform_resume" },
	{ 0xceb361b5, "ata_platform_remove_one" },
	{ 0x9aebcb10, "ata_scsi_queuecmd" },
	{ 0x2f04c5ef, "ata_scsi_ioctl" },
	{ 0xc4acef6d, "ata_scsi_slave_config" },
	{ 0x16f6a5d9, "ata_scsi_slave_destroy" },
	{ 0x639950a6, "ata_scsi_change_queue_depth" },
	{ 0xfce126e6, "ata_scsi_dma_need_drain" },
	{ 0x1089efeb, "ata_std_bios_param" },
	{ 0xa3322f59, "ata_scsi_unlock_native_capacity" },
	{ 0xda6bef19, "ahci_shost_groups" },
	{ 0xff092cc3, "ahci_sdev_groups" },
	{ 0x25492f11, "ahci_platform_ops" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,dm816-ahci");
MODULE_ALIAS("of:N*T*Cti,dm816-ahciC*");

MODULE_INFO(srcversion, "DCCE9D7DACDF262DB0D262B");
