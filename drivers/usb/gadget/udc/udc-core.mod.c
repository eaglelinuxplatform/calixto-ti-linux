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

SYMBOL_CRC(gadget_find_ep_by_name, 0x36e4bb85, "_gpl");
SYMBOL_CRC(usb_add_gadget, 0x8f0d6088, "_gpl");
SYMBOL_CRC(usb_add_gadget_udc, 0xc5ad24c7, "_gpl");
SYMBOL_CRC(usb_add_gadget_udc_release, 0x2d0735c0, "_gpl");
SYMBOL_CRC(usb_del_gadget, 0x7beff118, "_gpl");
SYMBOL_CRC(usb_del_gadget_udc, 0xa020b68f, "_gpl");
SYMBOL_CRC(usb_ep_alloc_request, 0xe9140521, "_gpl");
SYMBOL_CRC(usb_ep_clear_halt, 0xe0a80509, "_gpl");
SYMBOL_CRC(usb_ep_dequeue, 0x9df10ab5, "_gpl");
SYMBOL_CRC(usb_ep_disable, 0xbace3461, "_gpl");
SYMBOL_CRC(usb_ep_enable, 0x09a13d16, "_gpl");
SYMBOL_CRC(usb_ep_fifo_flush, 0x87c4f1ca, "_gpl");
SYMBOL_CRC(usb_ep_fifo_status, 0xbec5473b, "_gpl");
SYMBOL_CRC(usb_ep_free_request, 0x94565d24, "_gpl");
SYMBOL_CRC(usb_ep_queue, 0xc848d8dc, "_gpl");
SYMBOL_CRC(usb_ep_set_halt, 0xd8dca8c1, "_gpl");
SYMBOL_CRC(usb_ep_set_maxpacket_limit, 0x77b46ffb, "_gpl");
SYMBOL_CRC(usb_ep_set_wedge, 0x3e27065b, "_gpl");
SYMBOL_CRC(usb_gadget_activate, 0x2d094274, "_gpl");
SYMBOL_CRC(usb_gadget_check_config, 0x8087713e, "_gpl");
SYMBOL_CRC(usb_gadget_clear_selfpowered, 0x11348529, "_gpl");
SYMBOL_CRC(usb_gadget_connect, 0x32218c3d, "_gpl");
SYMBOL_CRC(usb_gadget_deactivate, 0x04d1dc63, "_gpl");
SYMBOL_CRC(usb_gadget_disconnect, 0x0a900449, "_gpl");
SYMBOL_CRC(usb_gadget_ep_match_desc, 0xb527aa34, "_gpl");
SYMBOL_CRC(usb_gadget_frame_number, 0x219c05c4, "_gpl");
SYMBOL_CRC(usb_gadget_giveback_request, 0x7eb00a3f, "_gpl");
SYMBOL_CRC(usb_gadget_map_request, 0x2c55a648, "_gpl");
SYMBOL_CRC(usb_gadget_map_request_by_dev, 0xe9096b49, "_gpl");
SYMBOL_CRC(usb_gadget_register_driver_owner, 0x7ee4256e, "_gpl");
SYMBOL_CRC(usb_gadget_set_selfpowered, 0xf58ae785, "_gpl");
SYMBOL_CRC(usb_gadget_set_state, 0x59b57e01, "_gpl");
SYMBOL_CRC(usb_gadget_udc_reset, 0xa86c0c8f, "_gpl");
SYMBOL_CRC(usb_gadget_unmap_request, 0xeab9215f, "_gpl");
SYMBOL_CRC(usb_gadget_unmap_request_by_dev, 0x835a9667, "_gpl");
SYMBOL_CRC(usb_gadget_unregister_driver, 0xd1f308c9, "_gpl");
SYMBOL_CRC(usb_gadget_vbus_connect, 0xd825817d, "_gpl");
SYMBOL_CRC(usb_gadget_vbus_disconnect, 0xc8c93337, "_gpl");
SYMBOL_CRC(usb_gadget_vbus_draw, 0x56d5cfba, "_gpl");
SYMBOL_CRC(usb_gadget_wakeup, 0xb6cc86b8, "_gpl");
SYMBOL_CRC(usb_get_gadget_udc_name, 0x50b88f41, "_gpl");
SYMBOL_CRC(usb_initialize_gadget, 0xeea92d5e, "_gpl");
SYMBOL_CRC(usb_udc_vbus_handler, 0xb65a5bda, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xa5684076, "ida_alloc_range" },
	{ 0x1697d536, "__class_create" },
	{ 0xee54f561, "dev_set_name" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x4676d27, "trace_raw_output_prep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xacaaba89, "device_unregister" },
	{ 0x8dd4f313, "__trace_trigger_soft_disabled" },
	{ 0x774fba91, "dma_unmap_page_attrs" },
	{ 0xca3ce6df, "class_destroy" },
	{ 0xc4ea270a, "trace_event_printf" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xb312e47e, "device_initialize" },
	{ 0x74e895b3, "trace_event_raw_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x801c7bcb, "dev_driver_string" },
	{ 0x3323213, "trace_event_buffer_commit" },
	{ 0xc675b096, "sysfs_notify" },
	{ 0xe4893f71, "dma_map_page_attrs" },
	{ 0x92997ed8, "_printk" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x2c6007e1, "put_device" },
	{ 0xe61a6643, "__current" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0xd7d82541, "perf_trace_run_bpf_submit" },
	{ 0xc17f0d47, "bus_unregister" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xc33aa545, "device_add" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9e1b61bc, "trace_event_reg" },
	{ 0xa24491bf, "ida_free" },
	{ 0xbb4f160b, "driver_unregister" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x1cfee4f1, "device_del" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xac1c7622, "trace_event_buffer_reserve" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x1504b38c, "kobject_uevent" },
	{ 0x7d5fc59d, "dma_unmap_sg_attrs" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x97255bdf, "strlen" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd37e9c2, "_dev_printk" },
	{ 0x9fafa4fb, "mem_map" },
	{ 0x4de17ab3, "usb_state_string" },
	{ 0x4ae4635, "trace_handle_return" },
	{ 0xddec41ac, "driver_register" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xdc7ad0db, "bus_register" },
	{ 0xa1fc4dc7, "dma_map_sg_attrs" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x92b57248, "flush_work" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usb-common");


MODULE_INFO(srcversion, "BD59BB4E47FBF8D88323C6B");
