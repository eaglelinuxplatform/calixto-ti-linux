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

SYMBOL_CRC(snd_pcm_new, 0x56a2ba82, "");
SYMBOL_CRC(snd_pcm_new_internal, 0xc78f8c79, "");
SYMBOL_CRC(snd_pcm_new_stream, 0x735fa141, "");
SYMBOL_CRC(snd_pcm_notify, 0x100fd4b9, "");
SYMBOL_CRC(snd_pcm_format_name, 0xa286a234, "_gpl");
SYMBOL_CRC(snd_pcm_hw_refine, 0x5f810777, "");
SYMBOL_CRC(snd_pcm_kernel_ioctl, 0xbb1f5a9a, "");
SYMBOL_CRC(snd_pcm_mmap_data, 0x8e87fa06, "");
SYMBOL_CRC(snd_pcm_open_substream, 0x91d0be0b, "");
SYMBOL_CRC(snd_pcm_release_substream, 0x78b18898, "");
SYMBOL_CRC(snd_pcm_stop, 0x4e0b97fa, "");
SYMBOL_CRC(snd_pcm_suspend_all, 0xa6c141ba, "");
SYMBOL_CRC(_snd_pcm_stream_lock_irqsave, 0x3fef6103, "_gpl");
SYMBOL_CRC(_snd_pcm_stream_lock_irqsave_nested, 0xc577c797, "_gpl");
SYMBOL_CRC(snd_pcm_lib_default_mmap, 0x4c5114a9, "_gpl");
SYMBOL_CRC(snd_pcm_stop_xrun, 0xcde642d9, "_gpl");
SYMBOL_CRC(snd_pcm_stream_lock, 0xe10fc5da, "_gpl");
SYMBOL_CRC(snd_pcm_stream_lock_irq, 0xe1e941f4, "_gpl");
SYMBOL_CRC(snd_pcm_stream_unlock, 0x99709d2a, "_gpl");
SYMBOL_CRC(snd_pcm_stream_unlock_irq, 0xf359b46c, "_gpl");
SYMBOL_CRC(snd_pcm_stream_unlock_irqrestore, 0x208e803a, "_gpl");
SYMBOL_CRC(__snd_pcm_lib_xfer, 0x736d8a2c, "");
SYMBOL_CRC(_snd_pcm_hw_param_setempty, 0x39bf9301, "");
SYMBOL_CRC(_snd_pcm_hw_params_any, 0x0283dfe3, "");
SYMBOL_CRC(snd_interval_list, 0x94098ff8, "");
SYMBOL_CRC(snd_interval_ranges, 0x503bd137, "");
SYMBOL_CRC(snd_interval_ratnum, 0xac437f7b, "");
SYMBOL_CRC(snd_interval_refine, 0x04cda566, "");
SYMBOL_CRC(snd_pcm_debug_name, 0x734d9d76, "");
SYMBOL_CRC(snd_pcm_hw_constraint_integer, 0x070aab31, "");
SYMBOL_CRC(snd_pcm_hw_constraint_list, 0xe472e708, "");
SYMBOL_CRC(snd_pcm_hw_constraint_mask64, 0x8c5e9584, "");
SYMBOL_CRC(snd_pcm_hw_constraint_minmax, 0xea5245c8, "");
SYMBOL_CRC(snd_pcm_hw_constraint_msbits, 0x76ab07e3, "");
SYMBOL_CRC(snd_pcm_hw_constraint_pow2, 0x08d2cf63, "");
SYMBOL_CRC(snd_pcm_hw_constraint_ranges, 0x045104d4, "");
SYMBOL_CRC(snd_pcm_hw_constraint_ratdens, 0x1eccca46, "");
SYMBOL_CRC(snd_pcm_hw_constraint_ratnums, 0x8c5f31a3, "");
SYMBOL_CRC(snd_pcm_hw_constraint_step, 0x335390e9, "");
SYMBOL_CRC(snd_pcm_hw_param_first, 0x1924bf76, "");
SYMBOL_CRC(snd_pcm_hw_param_last, 0xca90e92a, "");
SYMBOL_CRC(snd_pcm_hw_param_value, 0x52e3e4a5, "");
SYMBOL_CRC(snd_pcm_hw_rule_add, 0xfc1f5ab4, "");
SYMBOL_CRC(snd_pcm_hw_rule_noresample, 0xc99e390e, "");
SYMBOL_CRC(snd_pcm_lib_ioctl, 0x7e5f41d2, "");
SYMBOL_CRC(snd_pcm_period_elapsed, 0x220834f1, "");
SYMBOL_CRC(snd_pcm_period_elapsed_under_stream_lock, 0x6391d0d0, "");
SYMBOL_CRC(snd_pcm_set_ops, 0xe26e0f7e, "");
SYMBOL_CRC(snd_pcm_set_sync, 0x6bee5cea, "");
SYMBOL_CRC(snd_pcm_add_chmap_ctls, 0xc6233368, "_gpl");
SYMBOL_CRC(snd_pcm_alt_chmaps, 0x09e913c1, "_gpl");
SYMBOL_CRC(snd_pcm_std_chmaps, 0x04e1b99f, "_gpl");
SYMBOL_CRC(snd_pcm_format_big_endian, 0x4f816e9b, "");
SYMBOL_CRC(snd_pcm_format_linear, 0x6ef8fcd8, "");
SYMBOL_CRC(snd_pcm_format_little_endian, 0x3796bdcc, "");
SYMBOL_CRC(snd_pcm_format_physical_width, 0x68a24153, "");
SYMBOL_CRC(snd_pcm_format_set_silence, 0x5e7f4920, "");
SYMBOL_CRC(snd_pcm_format_signed, 0x1d027e4b, "");
SYMBOL_CRC(snd_pcm_format_silence_64, 0x650f8603, "");
SYMBOL_CRC(snd_pcm_format_size, 0x4d9b6d35, "");
SYMBOL_CRC(snd_pcm_format_unsigned, 0xa61aa028, "");
SYMBOL_CRC(snd_pcm_format_width, 0xe56a9336, "");
SYMBOL_CRC(snd_pcm_hw_limit_rates, 0xb71d986d, "");
SYMBOL_CRC(snd_pcm_rate_bit_to_rate, 0xff6104d0, "");
SYMBOL_CRC(snd_pcm_rate_to_rate_bit, 0xb9638db4, "");
SYMBOL_CRC(snd_pcm_rate_mask_intersect, 0xab8bc1a2, "_gpl");
SYMBOL_CRC(snd_pcm_rate_range_to_bits, 0x8d864069, "_gpl");
SYMBOL_CRC(_snd_pcm_lib_alloc_vmalloc_buffer, 0x8573ce0f, "");
SYMBOL_CRC(snd_pcm_lib_free_pages, 0xcaf78e62, "");
SYMBOL_CRC(snd_pcm_lib_free_vmalloc_buffer, 0x2eb06122, "");
SYMBOL_CRC(snd_pcm_lib_get_vmalloc_page, 0xae2bf0d7, "");
SYMBOL_CRC(snd_pcm_lib_malloc_pages, 0xd9ddb8c3, "");
SYMBOL_CRC(snd_pcm_lib_preallocate_free_for_all, 0x3fa88a14, "");
SYMBOL_CRC(snd_pcm_lib_preallocate_pages, 0x4d1d8558, "");
SYMBOL_CRC(snd_pcm_lib_preallocate_pages_for_all, 0x4493ce3e, "");
SYMBOL_CRC(snd_pcm_set_managed_buffer, 0xf0b0924b, "");
SYMBOL_CRC(snd_pcm_set_managed_buffer_all, 0xe7dd244b, "");
SYMBOL_CRC(snd_dma_alloc_dir_pages, 0x651b14be, "");
SYMBOL_CRC(snd_dma_alloc_pages_fallback, 0xc2b3f1b4, "");
SYMBOL_CRC(snd_dma_buffer_mmap, 0x20f28890, "");
SYMBOL_CRC(snd_dma_free_pages, 0xc9f3d9d0, "");
SYMBOL_CRC(snd_sgbuf_get_addr, 0x33c99ba1, "");
SYMBOL_CRC(snd_sgbuf_get_chunk_size, 0x9ab89461, "");
SYMBOL_CRC(snd_sgbuf_get_page, 0xb342ac42, "");
SYMBOL_CRC(snd_devm_alloc_dir_pages, 0xbd4ff38f, "_gpl");
SYMBOL_CRC(snd_dma_buffer_sync, 0xec3c458f, "_gpl");
SYMBOL_CRC(snd_pcm_hw_constraint_eld, 0x7c0798e5, "_gpl");
SYMBOL_CRC(snd_pcm_create_iec958_consumer, 0xfd6a7a6e, "");
SYMBOL_CRC(snd_pcm_create_iec958_consumer_hw_params, 0xf2ad80d9, "");
SYMBOL_CRC(snd_pcm_create_iec958_consumer_default, 0x9b746c56, "_gpl");
SYMBOL_CRC(snd_pcm_fill_iec958_consumer, 0xc48340f7, "_gpl");
SYMBOL_CRC(snd_pcm_fill_iec958_consumer_hw_params, 0x6bdd680c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7a48d06c, "cpu_latency_qos_remove_request" },
	{ 0x421d4dcf, "krealloc" },
	{ 0xa625a948, "dma_can_mmap" },
	{ 0x5a6d5863, "try_module_get" },
	{ 0xb2a51d20, "snd_info_register" },
	{ 0x792afccf, "snd_info_create_module_entry" },
	{ 0x4d431a30, "param_ops_ulong" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0xee54f561, "dev_set_name" },
	{ 0x964a87e5, "snd_ctl_add" },
	{ 0x1cfd08ef, "vmalloc_to_page" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x4676d27, "trace_raw_output_prep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb0f8a1fb, "vm_get_page_prot" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x81369573, "snd_timer_notify" },
	{ 0xad406e73, "snd_ctl_get_preferred_subdevice" },
	{ 0x12b73bbb, "dma_vunmap_noncontiguous" },
	{ 0x8dd4f313, "__trace_trigger_soft_disabled" },
	{ 0xdc430db2, "gen_pool_dma_alloc_align" },
	{ 0xffa519a8, "dma_mmap_pages" },
	{ 0xc4ea270a, "trace_event_printf" },
	{ 0x69dbcee4, "dma_sync_sg_for_cpu" },
	{ 0x6337d8d5, "dma_free_pages" },
	{ 0x21732aee, "dma_sync_single_for_device" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x3a486d71, "snd_timer_interrupt" },
	{ 0x7798415f, "snd_info_free_entry" },
	{ 0x74e895b3, "trace_event_raw_init" },
	{ 0xb0a3c5d2, "trace_print_symbols_seq" },
	{ 0x9d669763, "memcpy" },
	{ 0xd2a61657, "remap_pfn_range" },
	{ 0xe9c616de, "cpu_latency_qos_add_request" },
	{ 0x37a0cba, "kfree" },
	{ 0xae04012c, "__vmalloc" },
	{ 0x9e6d79f8, "snd_info_get_str" },
	{ 0x1f5fc4a5, "cpu_latency_qos_request_active" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xda840e03, "snd_fasync_helper" },
	{ 0xb8d3fed1, "cpu_cache" },
	{ 0x637493f3, "__wake_up" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xcf60dbc0, "snd_ctl_remove" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x1f051c7b, "devres_add" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x3323213, "trace_event_buffer_commit" },
	{ 0x6c3a4c26, "snd_ctl_new1" },
	{ 0x92997ed8, "_printk" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x61aa81ae, "dma_alloc_pages" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2c6007e1, "put_device" },
	{ 0x39ad008, "snd_ctl_register_ioctl" },
	{ 0xf51964e5, "snd_card_file_add" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xe61a6643, "__current" },
	{ 0x1449535e, "module_put" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0xd7d82541, "perf_trace_run_bpf_submit" },
	{ 0x8b1e52b6, "fput" },
	{ 0x4253aa7e, "down_write" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0xca8b2ae6, "dma_vmap_noncontiguous" },
	{ 0x7a79b9f3, "__sg_page_iter_next" },
	{ 0x8f595b11, "snd_major" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xcf669e88, "dma_alloc_attrs" },
	{ 0xc9357994, "__devres_alloc_node" },
	{ 0x9e1b61bc, "trace_event_reg" },
	{ 0xfd75d9dd, "dma_need_sync" },
	{ 0xe1681620, "snd_unregister_device" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0x71c90087, "memcmp" },
	{ 0x4dce47d8, "_raw_spin_trylock" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xa8f32085, "snd_timer_new" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x5fb01358, "alloc_pages_exact" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0xd466a3c7, "snd_device_new" },
	{ 0x66b4cd72, "dma_sync_single_for_cpu" },
	{ 0xbf83afbc, "dma_sync_sg_for_device" },
	{ 0x5f754e5a, "memset" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x176f192d, "snd_ctl_unregister_ioctl" },
	{ 0xfb1d7438, "down_read" },
	{ 0xfd0f592, "mutex_trylock" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf57fd9b2, "nonseekable_open" },
	{ 0x5af762f1, "snd_fasync_free" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf0221afb, "dma_free_noncontiguous" },
	{ 0xeea0399, "strscpy" },
	{ 0x4fb96182, "dma_alloc_noncontiguous" },
	{ 0x254f9faf, "dma_mmap_noncontiguous" },
	{ 0x4424b3fb, "dma_free_attrs" },
	{ 0x999e8297, "vfree" },
	{ 0xac1c7622, "trace_event_buffer_reserve" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xf705fa49, "gen_pool_free_owner" },
	{ 0x5855b740, "__sg_page_iter_start" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xe4c80097, "cacheid" },
	{ 0x7d461ffb, "of_gen_pool_get" },
	{ 0x4418ca21, "seq_printf" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xcaa38ea4, "snd_info_create_card_entry" },
	{ 0x2ee26c1, "free_pages_exact" },
	{ 0xb7e7508, "snd_device_initialize" },
	{ 0x899dbe14, "snd_power_wait" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xef0af09a, "dma_mmap_attrs" },
	{ 0x95a8ce2d, "pid_vnr" },
	{ 0x7400fa25, "snd_device_free" },
	{ 0x1b994a33, "snd_card_file_remove" },
	{ 0xf8f2a4eb, "snd_kill_fasync" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0xea07d716, "page_address" },
	{ 0xea124bd1, "gcd" },
	{ 0x79be75a0, "remap_vmalloc_range" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x9fafa4fb, "mem_map" },
	{ 0xc347b834, "snd_device_register" },
	{ 0x49ddd3df, "snd_register_device" },
	{ 0x4ae4635, "trace_handle_return" },
	{ 0xa7b3181c, "up_read" },
	{ 0x6390d26a, "put_pid" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xcc3b2cc9, "__sg_page_iter_dma_next" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "snd,snd-timer");


MODULE_INFO(srcversion, "84312100A3EEE237ACE5852");
