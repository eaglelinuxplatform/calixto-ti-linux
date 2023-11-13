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
	{ 0xa7b069a4, "__pci_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6b593266, "device_remove_software_node" },
	{ 0x90d8af31, "platform_device_unregister" },
	{ 0x70faed54, "pcim_enable_device" },
	{ 0xb340014f, "pci_set_master" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xba7d6f5e, "platform_device_alloc" },
	{ 0x5f754e5a, "memset" },
	{ 0xd6d58da3, "platform_device_add_resources" },
	{ 0x2e8e4a97, "device_add_software_node" },
	{ 0x1467da49, "platform_device_put" },
	{ 0xe69ce750, "platform_device_add" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6751583b, "pci_unregister_driver" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000016C3d0000ABCDsv*sd*bc0Csc03i*");
MODULE_ALIAS("pci:v000016C3d0000ABCEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016C3d0000ABCFsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6711BD2A486BEC488DA2D61");
