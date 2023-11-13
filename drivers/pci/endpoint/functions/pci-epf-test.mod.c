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
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x92997ed8, "_printk" },
	{ 0x53e4294a, "__pci_epf_register_driver" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x84cb84fc, "pci_epc_clear_bar" },
	{ 0x2f0fe95c, "pci_epf_free_space" },
	{ 0x370e7e97, "dma_release_channel" },
	{ 0xe6bb17b4, "pci_epc_get_features" },
	{ 0xc06366cd, "pci_epc_set_bar" },
	{ 0x243804, "pci_epc_set_msix" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x7b9d7835, "pci_epc_set_msi" },
	{ 0xd60d5bd0, "pci_epc_write_header" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x5f754e5a, "memset" },
	{ 0xd55e2db3, "dma_get_slave_caps" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x66e15914, "pci_epc_raise_irq" },
	{ 0xc37335b0, "complete" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x1b83a2d, "pci_epf_unregister_driver" },
	{ 0x4082f95f, "pci_epc_get_first_free_bar" },
	{ 0x3e4bb9b, "pci_epf_alloc_space" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x6c3ec2c0, "__dma_request_channel" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x33e9e0a2, "atomic_notifier_chain_register" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xdf398ffc, "dma_request_chan_by_mask" },
	{ 0x8451fdfe, "sg_init_table" },
	{ 0x30745185, "wait_for_completion_interruptible" },
	{ 0x1cc0526c, "pci_epc_get_msix" },
	{ 0x1f5c1be, "pci_epc_mem_alloc_addr" },
	{ 0x866c91ba, "pci_epc_map_addr" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x80c4c319, "crc32_le" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xe4893f71, "dma_map_page_attrs" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x774fba91, "dma_unmap_page_attrs" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x5e5d199b, "pci_epc_unmap_addr" },
	{ 0xf2c5551b, "pci_epc_mem_free_addr" },
	{ 0x68c01691, "pci_epc_get_msi" },
	{ 0x216d759a, "mmiocpy" },
	{ 0x801c7bcb, "dev_driver_string" },
	{ 0x9fafa4fb, "mem_map" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2C2CFF54E6716388B8E92D2");
