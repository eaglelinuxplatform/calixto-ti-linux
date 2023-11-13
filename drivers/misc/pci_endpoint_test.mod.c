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
	{ 0xfc182d24, "pci_alloc_irq_vectors_affinity" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xc37335b0, "complete" },
	{ 0x20b2fa3f, "pci_irq_vector" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0x6751583b, "pci_unregister_driver" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xdc2cbe84, "dma_set_mask" },
	{ 0xc6408e13, "dma_set_coherent_mask" },
	{ 0x6531ce6f, "pci_enable_device" },
	{ 0xb210bfec, "pci_request_regions" },
	{ 0xb340014f, "pci_set_master" },
	{ 0x2ebd66d6, "pci_ioremap_bar" },
	{ 0xa5684076, "ida_alloc_range" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x5253049c, "misc_register" },
	{ 0x79577703, "pci_free_irq_vectors" },
	{ 0x9900b112, "pci_release_regions" },
	{ 0x46399ea2, "pci_disable_device" },
	{ 0xbe014857, "devm_free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xa24491bf, "ida_free" },
	{ 0x9b5f8340, "pci_iounmap" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe96ccc17, "misc_deregister" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x5f754e5a, "memset" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0xe61a6643, "__current" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xe4893f71, "dma_map_page_attrs" },
	{ 0x80c4c319, "crc32_le" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0x774fba91, "dma_unmap_page_attrs" },
	{ 0x801c7bcb, "dev_driver_string" },
	{ 0x9fafa4fb, "mem_map" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0xe4ea4aab, "param_ops_bool" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000104Cd0000B500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000B501sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001957d000081C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001957d000080C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016C3d0000EDDAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000B00Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001912d00000028sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001912d0000002Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001912d0000002Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001912d00000025sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000B00Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000B00Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000B010sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "926D66A98B4422CFEF61697");
