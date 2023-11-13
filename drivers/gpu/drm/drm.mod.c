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

SYMBOL_CRC(devm_aperture_acquire_from_firmware, 0x75cafe44, "");
SYMBOL_CRC(drm_aperture_remove_conflicting_framebuffers, 0x1364204e, "");
SYMBOL_CRC(drm_aperture_remove_conflicting_pci_framebuffers, 0xad7de548, "");
SYMBOL_CRC(drm_file_get_master, 0x66bbcebb, "");
SYMBOL_CRC(drm_is_current_master, 0x6520d75c, "");
SYMBOL_CRC(drm_master_get, 0x29cb1e8a, "");
SYMBOL_CRC(drm_master_internal_acquire, 0xf4936887, "");
SYMBOL_CRC(drm_master_internal_release, 0xdcfccafc, "");
SYMBOL_CRC(drm_master_put, 0x650eb397, "");
SYMBOL_CRC(drm_clflush_pages, 0x599e1cb1, "");
SYMBOL_CRC(drm_clflush_sg, 0xc5ce9af3, "");
SYMBOL_CRC(drm_clflush_virt_range, 0x0a72f765, "");
SYMBOL_CRC(drm_memcpy_from_wc, 0xa38c4c94, "");
SYMBOL_CRC(drm_need_swiotlb, 0xb6127243, "");
SYMBOL_CRC(drm_event_cancel_free, 0xb766a478, "");
SYMBOL_CRC(drm_event_reserve_init, 0xc7af3fd9, "");
SYMBOL_CRC(drm_event_reserve_init_locked, 0x76b6763a, "");
SYMBOL_CRC(drm_open, 0x44f29c25, "");
SYMBOL_CRC(drm_poll, 0xc8a71282, "");
SYMBOL_CRC(drm_read, 0xf8d2ef3e, "");
SYMBOL_CRC(drm_release, 0x95414e9b, "");
SYMBOL_CRC(drm_release_noglobal, 0x6ca0f9c8, "");
SYMBOL_CRC(drm_send_event, 0x78ff0e7f, "");
SYMBOL_CRC(drm_send_event_locked, 0xbe6f4de9, "");
SYMBOL_CRC(drm_send_event_timestamp_locked, 0x0dd28591, "");
SYMBOL_CRC(drm_gem_create_mmap_offset, 0x88651b79, "");
SYMBOL_CRC(drm_gem_create_mmap_offset_size, 0xd35c1602, "");
SYMBOL_CRC(drm_gem_dma_resv_wait, 0x21658293, "");
SYMBOL_CRC(drm_gem_free_mmap_offset, 0xc89a27f4, "");
SYMBOL_CRC(drm_gem_get_pages, 0x46c11e56, "");
SYMBOL_CRC(drm_gem_handle_create, 0x64cdab5e, "");
SYMBOL_CRC(drm_gem_handle_delete, 0xc5f834ae, "");
SYMBOL_CRC(drm_gem_lock_reservations, 0x5ed8ecac, "");
SYMBOL_CRC(drm_gem_lru_init, 0x76b2e593, "");
SYMBOL_CRC(drm_gem_lru_move_tail, 0xc0d3752d, "");
SYMBOL_CRC(drm_gem_lru_remove, 0x6f05a4dc, "");
SYMBOL_CRC(drm_gem_lru_scan, 0x35da517f, "");
SYMBOL_CRC(drm_gem_mmap, 0x16ea17e0, "");
SYMBOL_CRC(drm_gem_mmap_obj, 0x89284ddd, "");
SYMBOL_CRC(drm_gem_object_free, 0xd680a377, "");
SYMBOL_CRC(drm_gem_object_init, 0xaefe3eb6, "");
SYMBOL_CRC(drm_gem_object_lookup, 0x5cc8961b, "");
SYMBOL_CRC(drm_gem_object_release, 0xecab52e9, "");
SYMBOL_CRC(drm_gem_objects_lookup, 0x6519adcb, "");
SYMBOL_CRC(drm_gem_private_object_init, 0xfef95529, "");
SYMBOL_CRC(drm_gem_put_pages, 0xcfc800f4, "");
SYMBOL_CRC(drm_gem_unlock_reservations, 0xb2235cd1, "");
SYMBOL_CRC(drm_gem_vm_close, 0xd42fb753, "");
SYMBOL_CRC(drm_gem_vm_open, 0x1fb1defc, "");
SYMBOL_CRC(drm_gem_vmap, 0x4cacff27, "");
SYMBOL_CRC(drm_gem_vunmap, 0x5c9f2563, "");
SYMBOL_CRC(drm_gem_dumb_map_offset, 0x5a4b096c, "_gpl");
SYMBOL_CRC(drm_invalid_op, 0x183ad338, "");
SYMBOL_CRC(drm_ioctl, 0x47e73dcc, "");
SYMBOL_CRC(drm_ioctl_flags, 0x57b6efe3, "");
SYMBOL_CRC(drm_ioctl_kernel, 0x549a3326, "");
SYMBOL_CRC(drm_noop, 0x23db2525, "");
SYMBOL_CRC(__devm_drm_dev_alloc, 0x5d271c36, "");
SYMBOL_CRC(drm_dev_alloc, 0xe1c3d60c, "");
SYMBOL_CRC(drm_dev_enter, 0x16d9e2be, "");
SYMBOL_CRC(drm_dev_exit, 0xe8a034df, "");
SYMBOL_CRC(drm_dev_get, 0x07fb7e9a, "");
SYMBOL_CRC(drm_dev_put, 0x1ce08b27, "");
SYMBOL_CRC(drm_dev_register, 0x1f9ee3f5, "");
SYMBOL_CRC(drm_dev_set_unique, 0xa0450732, "");
SYMBOL_CRC(drm_dev_unplug, 0xf6196b70, "");
SYMBOL_CRC(drm_dev_unregister, 0xb8ce0353, "");
SYMBOL_CRC(drm_put_dev, 0x240c5abf, "");
SYMBOL_CRC(drm_sysfs_connector_hotplug_event, 0x8b174924, "");
SYMBOL_CRC(drm_sysfs_connector_status_event, 0x25d1d26a, "");
SYMBOL_CRC(drm_sysfs_hotplug_event, 0x1c98a41d, "");
SYMBOL_CRC(drm_class_device_register, 0x232aa233, "_gpl");
SYMBOL_CRC(drm_class_device_unregister, 0x38ec65b5, "_gpl");
SYMBOL_CRC(__drm_mm_interval_first, 0x25daad93, "");
SYMBOL_CRC(drm_mm_init, 0xf0517d7a, "");
SYMBOL_CRC(drm_mm_insert_node_in_range, 0xb4032484, "");
SYMBOL_CRC(drm_mm_print, 0x0f7acb66, "");
SYMBOL_CRC(drm_mm_remove_node, 0x4b7ebf95, "");
SYMBOL_CRC(drm_mm_replace_node, 0x59056243, "");
SYMBOL_CRC(drm_mm_reserve_node, 0x2754dad8, "");
SYMBOL_CRC(drm_mm_scan_add_block, 0x2183c08c, "");
SYMBOL_CRC(drm_mm_scan_color_evict, 0xdf3f760d, "");
SYMBOL_CRC(drm_mm_scan_init_with_range, 0x2a962499, "");
SYMBOL_CRC(drm_mm_scan_remove_block, 0x5f7985a5, "");
SYMBOL_CRC(drm_mm_takedown, 0x57698a50, "");
SYMBOL_CRC(__drmm_crtc_alloc_with_planes, 0xc7b4587d, "");
SYMBOL_CRC(drm_crtc_check_viewport, 0x1ed8dc88, "");
SYMBOL_CRC(drm_crtc_cleanup, 0xabdb17d1, "");
SYMBOL_CRC(drm_crtc_create_scaling_filter_property, 0x896fdcbb, "");
SYMBOL_CRC(drm_crtc_from_index, 0xcd852894, "");
SYMBOL_CRC(drm_crtc_init_with_planes, 0xc031900a, "");
SYMBOL_CRC(drm_mode_set_config_internal, 0x1ab36c1f, "");
SYMBOL_CRC(drmm_crtc_init_with_planes, 0x4d997d62, "");
SYMBOL_CRC(drm_driver_legacy_fb_format, 0x440c6a90, "");
SYMBOL_CRC(drm_format_info, 0x55eb38da, "");
SYMBOL_CRC(drm_format_info_block_height, 0x982d09b3, "");
SYMBOL_CRC(drm_format_info_block_width, 0x74fc6fbd, "");
SYMBOL_CRC(drm_format_info_bpp, 0xe633a4cd, "");
SYMBOL_CRC(drm_format_info_min_pitch, 0x6910e4cd, "");
SYMBOL_CRC(drm_get_format_info, 0x1fdb8591, "");
SYMBOL_CRC(drm_mode_legacy_fb_format, 0x29f078d1, "");
SYMBOL_CRC(drm_connector_list_update, 0x2c79417a, "");
SYMBOL_CRC(drm_cvt_mode, 0x3aa4f883, "");
SYMBOL_CRC(drm_gtf_mode, 0x99f52ebc, "");
SYMBOL_CRC(drm_gtf_mode_complex, 0xc55969a1, "");
SYMBOL_CRC(drm_mode_copy, 0x9ce050be, "");
SYMBOL_CRC(drm_mode_create, 0x6754afda, "");
SYMBOL_CRC(drm_mode_create_from_cmdline_mode, 0x5e574dff, "");
SYMBOL_CRC(drm_mode_debug_printmodeline, 0x2ed3c600, "");
SYMBOL_CRC(drm_mode_destroy, 0x4d270c0f, "");
SYMBOL_CRC(drm_mode_duplicate, 0x200a776d, "");
SYMBOL_CRC(drm_mode_equal, 0x0d9b4753, "");
SYMBOL_CRC(drm_mode_equal_no_clocks, 0x3ab87110, "");
SYMBOL_CRC(drm_mode_equal_no_clocks_no_stereo, 0x24d124ac, "");
SYMBOL_CRC(drm_mode_get_hv_timing, 0x4403a9c3, "");
SYMBOL_CRC(drm_mode_init, 0xcdb99cc9, "");
SYMBOL_CRC(drm_mode_is_420, 0x8c35d2cf, "");
SYMBOL_CRC(drm_mode_is_420_also, 0x9f7fbed2, "");
SYMBOL_CRC(drm_mode_is_420_only, 0x0d7e35e2, "");
SYMBOL_CRC(drm_mode_match, 0x9b95c885, "");
SYMBOL_CRC(drm_mode_parse_command_line_for_connector, 0x6aae0b92, "");
SYMBOL_CRC(drm_mode_probed_add, 0x2ae8b72c, "");
SYMBOL_CRC(drm_mode_prune_invalid, 0xce925d25, "");
SYMBOL_CRC(drm_mode_set_crtcinfo, 0x4575a0ca, "");
SYMBOL_CRC(drm_mode_set_name, 0x4a35d30d, "");
SYMBOL_CRC(drm_mode_sort, 0xf1421d13, "");
SYMBOL_CRC(drm_mode_validate_driver, 0x389628f7, "");
SYMBOL_CRC(drm_mode_validate_size, 0xd7a9cf42, "");
SYMBOL_CRC(drm_mode_validate_ycbcr420, 0xe4b3526c, "");
SYMBOL_CRC(drm_mode_vrefresh, 0xf1b5340a, "");
SYMBOL_CRC(drm_bus_flags_from_videomode, 0xad885165, "_gpl");
SYMBOL_CRC(drm_display_mode_from_videomode, 0x66cf2f64, "_gpl");
SYMBOL_CRC(drm_display_mode_to_videomode, 0xfe9f72f3, "_gpl");
SYMBOL_CRC(of_get_drm_display_mode, 0x6366f52f, "_gpl");
SYMBOL_CRC(of_get_drm_panel_display_mode, 0x5c9cfaf8, "_gpl");
SYMBOL_CRC(drm_add_edid_modes, 0x61ddff67, "");
SYMBOL_CRC(drm_add_modes_noedid, 0x9e632a07, "");
SYMBOL_CRC(drm_add_override_edid_modes, 0xfe591c1e, "");
SYMBOL_CRC(drm_av_sync_delay, 0xb3a5ce45, "");
SYMBOL_CRC(drm_connector_update_edid_property, 0x3faaf2f7, "");
SYMBOL_CRC(drm_default_rgb_quant_range, 0x65702bd6, "");
SYMBOL_CRC(drm_detect_hdmi_monitor, 0x38690d99, "");
SYMBOL_CRC(drm_detect_monitor_audio, 0xa248afde, "");
SYMBOL_CRC(drm_display_mode_from_cea_vic, 0x890e2b8d, "");
SYMBOL_CRC(drm_edid_alloc, 0xb3e3c09c, "");
SYMBOL_CRC(drm_edid_are_equal, 0x24993e50, "");
SYMBOL_CRC(drm_edid_block_valid, 0xd13f9985, "");
SYMBOL_CRC(drm_edid_connector_update, 0xb9bbb226, "");
SYMBOL_CRC(drm_edid_dup, 0xb212dc3e, "");
SYMBOL_CRC(drm_edid_duplicate, 0x7edf470b, "");
SYMBOL_CRC(drm_edid_free, 0x397c3d27, "");
SYMBOL_CRC(drm_edid_get_monitor_name, 0x7c545285, "");
SYMBOL_CRC(drm_edid_get_panel_id, 0xe49f3338, "");
SYMBOL_CRC(drm_edid_header_is_valid, 0x9b9de1c1, "");
SYMBOL_CRC(drm_edid_is_valid, 0x8d72789e, "");
SYMBOL_CRC(drm_edid_raw, 0x4489a5e9, "");
SYMBOL_CRC(drm_edid_read, 0x0ec90c7f, "");
SYMBOL_CRC(drm_edid_read_custom, 0x07b1142b, "");
SYMBOL_CRC(drm_edid_read_ddc, 0x0edf349b, "");
SYMBOL_CRC(drm_edid_to_sad, 0x6ac01ea8, "");
SYMBOL_CRC(drm_edid_to_speaker_allocation, 0x3cdc37e9, "");
SYMBOL_CRC(drm_get_edid, 0x5138844c, "");
SYMBOL_CRC(drm_get_edid_switcheroo, 0x54089631, "");
SYMBOL_CRC(drm_hdmi_avi_infoframe_from_display_mode, 0x931651bd, "");
SYMBOL_CRC(drm_hdmi_avi_infoframe_quant_range, 0x2f254fc5, "");
SYMBOL_CRC(drm_hdmi_vendor_infoframe_from_display_mode, 0xc14ef4ef, "");
SYMBOL_CRC(drm_match_cea_mode, 0x9b285573, "");
SYMBOL_CRC(drm_mode_find_dmt, 0x2404d9a1, "");
SYMBOL_CRC(drm_probe_ddc, 0x58a8fafa, "");
SYMBOL_CRC(drm_set_preferred_mode, 0x29db79bc, "");
SYMBOL_CRC(drm_do_get_edid, 0xd695e008, "_gpl");
SYMBOL_CRC(drm_gem_dmabuf_export, 0xfcee6cf8, "");
SYMBOL_CRC(drm_gem_dmabuf_mmap, 0x8576587e, "");
SYMBOL_CRC(drm_gem_dmabuf_release, 0xaa603250, "");
SYMBOL_CRC(drm_gem_dmabuf_vmap, 0x6aa0e9c2, "");
SYMBOL_CRC(drm_gem_dmabuf_vunmap, 0xb7576f7d, "");
SYMBOL_CRC(drm_gem_map_attach, 0x64ecbde2, "");
SYMBOL_CRC(drm_gem_map_detach, 0x37938d01, "");
SYMBOL_CRC(drm_gem_map_dma_buf, 0x7ae14004, "");
SYMBOL_CRC(drm_gem_prime_export, 0x344a7b74, "");
SYMBOL_CRC(drm_gem_prime_fd_to_handle, 0xa25968e3, "");
SYMBOL_CRC(drm_gem_prime_handle_to_fd, 0x5bd8eb02, "");
SYMBOL_CRC(drm_gem_prime_import, 0x68399d45, "");
SYMBOL_CRC(drm_gem_prime_import_dev, 0x988ce1bf, "");
SYMBOL_CRC(drm_gem_prime_mmap, 0xc6b5a31f, "");
SYMBOL_CRC(drm_gem_unmap_dma_buf, 0x7b48cc81, "");
SYMBOL_CRC(drm_prime_gem_destroy, 0x25da2f67, "");
SYMBOL_CRC(drm_prime_get_contiguous_size, 0x3e3f8c5c, "");
SYMBOL_CRC(drm_prime_pages_to_sg, 0x8e185fe5, "");
SYMBOL_CRC(drm_prime_sg_to_dma_addr_array, 0x5c9ae404, "");
SYMBOL_CRC(drm_prime_sg_to_page_array, 0x183a155b, "");
SYMBOL_CRC(drm_vma_node_allow, 0xc05fee8e, "");
SYMBOL_CRC(drm_vma_node_allow_once, 0x60a1ac52, "");
SYMBOL_CRC(drm_vma_node_is_allowed, 0xb52cda4c, "");
SYMBOL_CRC(drm_vma_node_revoke, 0xf9a5ebd7, "");
SYMBOL_CRC(drm_vma_offset_add, 0x4f8169e2, "");
SYMBOL_CRC(drm_vma_offset_lookup_locked, 0x74eaf26b, "");
SYMBOL_CRC(drm_vma_offset_manager_destroy, 0x71221d52, "");
SYMBOL_CRC(drm_vma_offset_manager_init, 0x39093b79, "");
SYMBOL_CRC(drm_vma_offset_remove, 0x4d73b36c, "");
SYMBOL_CRC(drm_modeset_acquire_fini, 0x6e0d27e1, "");
SYMBOL_CRC(drm_modeset_acquire_init, 0x8b01ac08, "");
SYMBOL_CRC(drm_modeset_backoff, 0xfdc5460e, "");
SYMBOL_CRC(drm_modeset_drop_locks, 0xb54241da, "");
SYMBOL_CRC(drm_modeset_lock, 0xd39ffdc3, "");
SYMBOL_CRC(drm_modeset_lock_all, 0x31f1b903, "");
SYMBOL_CRC(drm_modeset_lock_all_ctx, 0x3360ebbe, "");
SYMBOL_CRC(drm_modeset_lock_init, 0x5b5d6d47, "");
SYMBOL_CRC(drm_modeset_lock_single_interruptible, 0x8b579540, "");
SYMBOL_CRC(drm_modeset_unlock, 0x9b12d707, "");
SYMBOL_CRC(drm_modeset_unlock_all, 0x5f3f2e1a, "");
SYMBOL_CRC(drm_warn_on_modeset_not_all_locked, 0xd0ac40dd, "");
SYMBOL_CRC(__drm_atomic_helper_disable_plane, 0xb321c66e, "");
SYMBOL_CRC(__drm_atomic_helper_set_config, 0xf024a820, "");
SYMBOL_CRC(__drm_atomic_state_free, 0xb9cad492, "");
SYMBOL_CRC(__drm_crtc_commit_free, 0xae277372, "");
SYMBOL_CRC(drm_atomic_add_affected_connectors, 0x624760ab, "");
SYMBOL_CRC(drm_atomic_add_affected_planes, 0xadb4bd4d, "");
SYMBOL_CRC(drm_atomic_add_encoder_bridges, 0x697ee8e5, "");
SYMBOL_CRC(drm_atomic_check_only, 0xecb5bf6a, "");
SYMBOL_CRC(drm_atomic_commit, 0x15157b8f, "");
SYMBOL_CRC(drm_atomic_get_bridge_state, 0xee413644, "");
SYMBOL_CRC(drm_atomic_get_connector_state, 0x93bcda2d, "");
SYMBOL_CRC(drm_atomic_get_crtc_state, 0xa41c32d1, "");
SYMBOL_CRC(drm_atomic_get_new_bridge_state, 0xd9ea3464, "");
SYMBOL_CRC(drm_atomic_get_new_connector_for_encoder, 0x4c0fbf06, "");
SYMBOL_CRC(drm_atomic_get_new_private_obj_state, 0xe2fe5175, "");
SYMBOL_CRC(drm_atomic_get_old_bridge_state, 0x034c5fcc, "");
SYMBOL_CRC(drm_atomic_get_old_connector_for_encoder, 0x4b27585a, "");
SYMBOL_CRC(drm_atomic_get_old_private_obj_state, 0xe5d6b629, "");
SYMBOL_CRC(drm_atomic_get_plane_state, 0x03bc2e9b, "");
SYMBOL_CRC(drm_atomic_get_private_obj_state, 0x11d70fe0, "");
SYMBOL_CRC(drm_atomic_nonblocking_commit, 0x77f28b1b, "");
SYMBOL_CRC(drm_atomic_print_new_state, 0xd384234b, "");
SYMBOL_CRC(drm_atomic_private_obj_fini, 0x22bfcce3, "");
SYMBOL_CRC(drm_atomic_private_obj_init, 0x984ceea2, "");
SYMBOL_CRC(drm_atomic_state_alloc, 0xd3b212fd, "");
SYMBOL_CRC(drm_atomic_state_clear, 0x451383b0, "");
SYMBOL_CRC(drm_atomic_state_default_clear, 0xb84a96fc, "");
SYMBOL_CRC(drm_atomic_state_default_release, 0xecc6d9e5, "");
SYMBOL_CRC(drm_atomic_state_init, 0xac9139c0, "");
SYMBOL_CRC(drm_crtc_commit_wait, 0xe060ef1e, "");
SYMBOL_CRC(drm_state_dump, 0x9926c184, "");
SYMBOL_CRC(devm_drm_bridge_add, 0x53d97922, "");
SYMBOL_CRC(drm_atomic_bridge_chain_check, 0xc4cb36c9, "");
SYMBOL_CRC(drm_atomic_bridge_chain_disable, 0x8129754a, "");
SYMBOL_CRC(drm_atomic_bridge_chain_enable, 0xea12a57b, "");
SYMBOL_CRC(drm_atomic_bridge_chain_post_disable, 0x51dd33a8, "");
SYMBOL_CRC(drm_atomic_bridge_chain_pre_enable, 0x6eba29ba, "");
SYMBOL_CRC(drm_bridge_add, 0xf5f27adc, "");
SYMBOL_CRC(drm_bridge_attach, 0x3419bb4b, "");
SYMBOL_CRC(drm_bridge_chain_disable, 0x3a99ab9a, "");
SYMBOL_CRC(drm_bridge_chain_enable, 0xd19e7d90, "");
SYMBOL_CRC(drm_bridge_chain_mode_fixup, 0xec24a3cf, "");
SYMBOL_CRC(drm_bridge_chain_mode_set, 0x55f2e5b6, "");
SYMBOL_CRC(drm_bridge_chain_mode_valid, 0x80b8906b, "");
SYMBOL_CRC(drm_bridge_chain_post_disable, 0xf8a40303, "");
SYMBOL_CRC(drm_bridge_chain_pre_enable, 0x815e967c, "");
SYMBOL_CRC(drm_bridge_remove, 0x0e6f74e3, "");
SYMBOL_CRC(of_drm_find_bridge, 0xc6363143, "");
SYMBOL_CRC(drm_bridge_detect, 0x5cce1aa6, "_gpl");
SYMBOL_CRC(drm_bridge_get_edid, 0xd12f1d4b, "_gpl");
SYMBOL_CRC(drm_bridge_get_modes, 0x654cc5c7, "_gpl");
SYMBOL_CRC(drm_bridge_hpd_disable, 0x37028977, "_gpl");
SYMBOL_CRC(drm_bridge_hpd_enable, 0x91d239ab, "_gpl");
SYMBOL_CRC(drm_bridge_hpd_notify, 0xfa8c8566, "_gpl");
SYMBOL_CRC(drm_framebuffer_cleanup, 0xafeb5a47, "");
SYMBOL_CRC(drm_framebuffer_init, 0x7177b223, "");
SYMBOL_CRC(drm_framebuffer_lookup, 0x92308246, "");
SYMBOL_CRC(drm_framebuffer_plane_height, 0x9516dab5, "");
SYMBOL_CRC(drm_framebuffer_plane_width, 0xddd8699d, "");
SYMBOL_CRC(drm_framebuffer_remove, 0xf4be0c21, "");
SYMBOL_CRC(drm_framebuffer_unregister_private, 0x8228f052, "");
SYMBOL_CRC(drm_connector_atomic_hdr_metadata_equal, 0xfb85ad72, "");
SYMBOL_CRC(drm_connector_attach_colorspace_property, 0x675dbd30, "");
SYMBOL_CRC(drm_connector_attach_content_type_property, 0xc2629aef, "");
SYMBOL_CRC(drm_connector_attach_dp_subconnector_property, 0x435aa680, "");
SYMBOL_CRC(drm_connector_attach_edid_property, 0x2ca1322f, "");
SYMBOL_CRC(drm_connector_attach_encoder, 0x2d561977, "");
SYMBOL_CRC(drm_connector_attach_hdr_output_metadata_property, 0xf0d9f949, "");
SYMBOL_CRC(drm_connector_attach_max_bpc_property, 0xbe94cfdb, "");
SYMBOL_CRC(drm_connector_attach_privacy_screen_properties, 0xa0893629, "");
SYMBOL_CRC(drm_connector_attach_privacy_screen_provider, 0xb78b1ae9, "");
SYMBOL_CRC(drm_connector_attach_scaling_mode_property, 0xe04ce708, "");
SYMBOL_CRC(drm_connector_attach_tv_margin_properties, 0xed6ca6ac, "");
SYMBOL_CRC(drm_connector_attach_vrr_capable_property, 0xf3e879ed, "");
SYMBOL_CRC(drm_connector_cleanup, 0xb4430229, "");
SYMBOL_CRC(drm_connector_create_privacy_screen_properties, 0xb5c6ecec, "");
SYMBOL_CRC(drm_connector_has_possible_encoder, 0x4635b8e6, "");
SYMBOL_CRC(drm_connector_init, 0x8f03acad, "");
SYMBOL_CRC(drm_connector_init_with_ddc, 0xf4b14942, "");
SYMBOL_CRC(drm_connector_list_iter_begin, 0xd11ff08b, "");
SYMBOL_CRC(drm_connector_list_iter_end, 0x9da825c5, "");
SYMBOL_CRC(drm_connector_list_iter_next, 0xb50528d8, "");
SYMBOL_CRC(drm_connector_oob_hotplug_event, 0x56eb06b1, "");
SYMBOL_CRC(drm_connector_register, 0x6b203f6f, "");
SYMBOL_CRC(drm_connector_set_link_status_property, 0x5409b9a9, "");
SYMBOL_CRC(drm_connector_set_orientation_from_panel, 0x9e799b9a, "");
SYMBOL_CRC(drm_connector_set_panel_orientation, 0xc75dc0a8, "");
SYMBOL_CRC(drm_connector_set_panel_orientation_with_quirk, 0x7961e6b8, "");
SYMBOL_CRC(drm_connector_set_path_property, 0x86cbfa39, "");
SYMBOL_CRC(drm_connector_set_tile_property, 0x49a296b1, "");
SYMBOL_CRC(drm_connector_set_vrr_capable_property, 0x29d6f227, "");
SYMBOL_CRC(drm_connector_unregister, 0x55e6631d, "");
SYMBOL_CRC(drm_connector_update_privacy_screen, 0x112fd32b, "");
SYMBOL_CRC(drm_display_info_set_bus_formats, 0xbdac567a, "");
SYMBOL_CRC(drm_get_connector_status_name, 0x0fd60df2, "");
SYMBOL_CRC(drm_get_connector_type_name, 0xf406e46a, "");
SYMBOL_CRC(drm_get_subpixel_order_name, 0x107742a9, "");
SYMBOL_CRC(drm_mode_create_aspect_ratio_property, 0x48427b1e, "");
SYMBOL_CRC(drm_mode_create_content_type_property, 0x1c14791d, "");
SYMBOL_CRC(drm_mode_create_dp_colorspace_property, 0x0f8f493d, "");
SYMBOL_CRC(drm_mode_create_dvi_i_properties, 0x6b4a67ab, "");
SYMBOL_CRC(drm_mode_create_hdmi_colorspace_property, 0x5cc40bf9, "");
SYMBOL_CRC(drm_mode_create_scaling_mode_property, 0xfc015b15, "");
SYMBOL_CRC(drm_mode_create_suggested_offset_properties, 0x17f61b92, "");
SYMBOL_CRC(drm_mode_create_tile_group, 0x70ca81d3, "");
SYMBOL_CRC(drm_mode_create_tv_margin_properties, 0x7c2b3b01, "");
SYMBOL_CRC(drm_mode_create_tv_properties, 0x76b248c3, "");
SYMBOL_CRC(drm_mode_get_tile_group, 0xe948816f, "");
SYMBOL_CRC(drm_mode_put_tile_group, 0xb74ab95d, "");
SYMBOL_CRC(drmm_connector_init, 0x6eac224b, "");
SYMBOL_CRC(drm_atomic_normalize_zpos, 0xb415efe3, "");
SYMBOL_CRC(drm_plane_create_alpha_property, 0xeec15cb3, "");
SYMBOL_CRC(drm_plane_create_blend_mode_property, 0x9a8bd82a, "");
SYMBOL_CRC(drm_plane_create_rotation_property, 0x7c23d092, "");
SYMBOL_CRC(drm_plane_create_zpos_immutable_property, 0x9b96c156, "");
SYMBOL_CRC(drm_plane_create_zpos_property, 0xdb734b0e, "");
SYMBOL_CRC(drm_rotation_simplify, 0xdf666902, "");
SYMBOL_CRC(__drmm_encoder_alloc, 0x39afe5ba, "");
SYMBOL_CRC(drm_encoder_cleanup, 0x4bf5f3ca, "");
SYMBOL_CRC(drm_encoder_init, 0x1b0683e4, "");
SYMBOL_CRC(drmm_encoder_init, 0xb31d291b, "");
SYMBOL_CRC(drm_mode_object_find, 0xd5110157, "");
SYMBOL_CRC(drm_mode_object_get, 0x9d702cd1, "");
SYMBOL_CRC(drm_mode_object_put, 0x380f883f, "");
SYMBOL_CRC(drm_object_attach_property, 0xb0f09560, "");
SYMBOL_CRC(drm_object_property_get_default_value, 0x82511052, "");
SYMBOL_CRC(drm_object_property_get_value, 0xd3dc18be, "");
SYMBOL_CRC(drm_object_property_set_value, 0x8b09b0f9, "");
SYMBOL_CRC(drm_property_add_enum, 0x97efe1c9, "");
SYMBOL_CRC(drm_property_blob_get, 0x6d0b03d2, "");
SYMBOL_CRC(drm_property_blob_put, 0x25fb2efe, "");
SYMBOL_CRC(drm_property_create, 0x899c2ab2, "");
SYMBOL_CRC(drm_property_create_bitmask, 0x8bd96497, "");
SYMBOL_CRC(drm_property_create_blob, 0xaca001ab, "");
SYMBOL_CRC(drm_property_create_bool, 0x8c67a067, "");
SYMBOL_CRC(drm_property_create_enum, 0x28f10915, "");
SYMBOL_CRC(drm_property_create_object, 0x0999c05c, "");
SYMBOL_CRC(drm_property_create_range, 0x7326477d, "");
SYMBOL_CRC(drm_property_create_signed_range, 0xf740eb22, "");
SYMBOL_CRC(drm_property_destroy, 0xda8311dc, "");
SYMBOL_CRC(drm_property_lookup_blob, 0xb6e2e83e, "");
SYMBOL_CRC(drm_property_replace_blob, 0x460be2b6, "");
SYMBOL_CRC(drm_property_replace_global_blob, 0xf1a971dd, "");
SYMBOL_CRC(__drm_universal_plane_alloc, 0xe76f65c7, "");
SYMBOL_CRC(__drmm_universal_plane_alloc, 0xa533f4bd, "");
SYMBOL_CRC(drm_any_plane_has_format, 0xd3b47385, "");
SYMBOL_CRC(drm_mode_plane_set_obj_prop, 0xdb652634, "");
SYMBOL_CRC(drm_plane_cleanup, 0xf6325c6e, "");
SYMBOL_CRC(drm_plane_create_scaling_filter_property, 0x380fb29f, "");
SYMBOL_CRC(drm_plane_enable_fb_damage_clips, 0x2c1325e9, "");
SYMBOL_CRC(drm_plane_force_disable, 0x77fd7484, "");
SYMBOL_CRC(drm_plane_from_index, 0xaa89c01b, "");
SYMBOL_CRC(drm_plane_get_damage_clips, 0x0b85c510, "");
SYMBOL_CRC(drm_plane_get_damage_clips_count, 0x5a99193e, "");
SYMBOL_CRC(drm_universal_plane_init, 0xa1b93fd9, "");
SYMBOL_CRC(drm_color_ctm_s31_32_to_qm_n, 0xad4e902b, "");
SYMBOL_CRC(drm_color_lut_check, 0x5a3c578f, "");
SYMBOL_CRC(drm_crtc_enable_color_mgmt, 0x2756eed5, "");
SYMBOL_CRC(drm_mode_crtc_set_gamma_size, 0xedb146ee, "");
SYMBOL_CRC(drm_plane_create_color_properties, 0x67cf4bf6, "");
SYMBOL_CRC(___drm_dbg, 0xb9c4492c, "");
SYMBOL_CRC(__drm_debug, 0x69353664, "");
SYMBOL_CRC(__drm_dev_dbg, 0xbbf142c1, "");
SYMBOL_CRC(__drm_err, 0xb11ac7a7, "");
SYMBOL_CRC(__drm_printfn_coredump, 0xea00fe81, "");
SYMBOL_CRC(__drm_printfn_debug, 0xf824c7db, "");
SYMBOL_CRC(__drm_printfn_err, 0x3f405489, "");
SYMBOL_CRC(__drm_printfn_info, 0xe317082a, "");
SYMBOL_CRC(__drm_printfn_seq_file, 0xfeb953b1, "");
SYMBOL_CRC(__drm_puts_coredump, 0x3b0e5e9c, "");
SYMBOL_CRC(__drm_puts_seq_file, 0x513072fe, "");
SYMBOL_CRC(drm_dev_printk, 0x5447782c, "");
SYMBOL_CRC(drm_print_bits, 0x32a0cc37, "");
SYMBOL_CRC(drm_print_regset32, 0xea90dc84, "");
SYMBOL_CRC(drm_printf, 0x28779e52, "");
SYMBOL_CRC(drm_puts, 0x521ad6d0, "");
SYMBOL_CRC(drm_mode_config_cleanup, 0x07709f07, "");
SYMBOL_CRC(drm_mode_config_reset, 0x39c55ced, "");
SYMBOL_CRC(drmm_mode_config_init, 0xf1d9125f, "");
SYMBOL_CRC(drm_calc_timestamping_constants, 0xb3b87c38, "");
SYMBOL_CRC(drm_crtc_accurate_vblank_count, 0xb6c86a7a, "");
SYMBOL_CRC(drm_crtc_arm_vblank_event, 0xfdcab8d4, "");
SYMBOL_CRC(drm_crtc_handle_vblank, 0x1c4eaef7, "");
SYMBOL_CRC(drm_crtc_send_vblank_event, 0x0c106a66, "");
SYMBOL_CRC(drm_crtc_set_max_vblank_count, 0x70aad2cf, "");
SYMBOL_CRC(drm_crtc_vblank_count, 0x44e9e5df, "");
SYMBOL_CRC(drm_crtc_vblank_count_and_time, 0x03ac464d, "");
SYMBOL_CRC(drm_crtc_vblank_get, 0x85363cd1, "");
SYMBOL_CRC(drm_crtc_vblank_helper_get_vblank_timestamp, 0xc5d18048, "");
SYMBOL_CRC(drm_crtc_vblank_helper_get_vblank_timestamp_internal, 0xd27930e0, "");
SYMBOL_CRC(drm_crtc_vblank_off, 0xa57fcc54, "");
SYMBOL_CRC(drm_crtc_vblank_on, 0x18de771a, "");
SYMBOL_CRC(drm_crtc_vblank_put, 0x32a64f5f, "");
SYMBOL_CRC(drm_crtc_vblank_reset, 0xbf3f5f4b, "");
SYMBOL_CRC(drm_crtc_vblank_restore, 0xcb6fc0e1, "");
SYMBOL_CRC(drm_crtc_vblank_waitqueue, 0x30b1f54e, "");
SYMBOL_CRC(drm_crtc_wait_one_vblank, 0x1bc5c923, "");
SYMBOL_CRC(drm_dev_has_vblank, 0x82c90fbd, "");
SYMBOL_CRC(drm_handle_vblank, 0x6b606bc4, "");
SYMBOL_CRC(drm_vblank_init, 0x66b48d41, "");
SYMBOL_CRC(drm_wait_one_vblank, 0x93840c76, "");
SYMBOL_CRC(drm_syncobj_add_point, 0xdad57800, "");
SYMBOL_CRC(drm_syncobj_create, 0xe35d5ef4, "");
SYMBOL_CRC(drm_syncobj_find, 0x3e2751e3, "");
SYMBOL_CRC(drm_syncobj_find_fence, 0x1e81e4d8, "");
SYMBOL_CRC(drm_syncobj_free, 0x1a411479, "");
SYMBOL_CRC(drm_syncobj_get_fd, 0xd37c00b3, "");
SYMBOL_CRC(drm_syncobj_get_handle, 0x95919c84, "");
SYMBOL_CRC(drm_syncobj_replace_fence, 0x23ca7fc4, "");
SYMBOL_CRC(drm_timeout_abs_to_jiffies, 0x50674de7, "");
SYMBOL_CRC(drm_writeback_cleanup_job, 0xbe8b8d97, "");
SYMBOL_CRC(drm_writeback_connector_init, 0x6cc558aa, "");
SYMBOL_CRC(drm_writeback_connector_init_with_encoder, 0x77518933, "");
SYMBOL_CRC(drm_writeback_get_out_fence, 0x6ff5212a, "");
SYMBOL_CRC(drm_writeback_prepare_job, 0x29c513eb, "");
SYMBOL_CRC(drm_writeback_queue_job, 0xb97b2c00, "");
SYMBOL_CRC(drm_writeback_signal_completion, 0x6ea78a5a, "");
SYMBOL_CRC(drm_client_buffer_vmap, 0xf4db45a2, "");
SYMBOL_CRC(drm_client_buffer_vunmap, 0xc859affc, "");
SYMBOL_CRC(drm_client_dev_hotplug, 0xefb1c4a5, "");
SYMBOL_CRC(drm_client_framebuffer_create, 0x586ce1b6, "");
SYMBOL_CRC(drm_client_framebuffer_delete, 0x576937fd, "");
SYMBOL_CRC(drm_client_framebuffer_flush, 0xff626dfb, "");
SYMBOL_CRC(drm_client_init, 0x9aab7ae1, "");
SYMBOL_CRC(drm_client_register, 0x5c27faf4, "");
SYMBOL_CRC(drm_client_release, 0xbcbb05ff, "");
SYMBOL_CRC(drm_client_modeset_check, 0x470cc004, "");
SYMBOL_CRC(drm_client_modeset_commit, 0x869781fc, "");
SYMBOL_CRC(drm_client_modeset_commit_locked, 0x148d68c5, "");
SYMBOL_CRC(drm_client_modeset_dpms, 0x728317f4, "");
SYMBOL_CRC(drm_client_modeset_probe, 0x63bac1d2, "");
SYMBOL_CRC(drm_client_rotation, 0x184eeec0, "");
SYMBOL_CRC(drm_atomic_set_crtc_for_connector, 0x41347c9f, "");
SYMBOL_CRC(drm_atomic_set_crtc_for_plane, 0xe93fe3a7, "");
SYMBOL_CRC(drm_atomic_set_fb_for_plane, 0xd6f0a283, "");
SYMBOL_CRC(drm_atomic_set_mode_for_crtc, 0x8503da33, "");
SYMBOL_CRC(drm_atomic_set_mode_prop_for_crtc, 0x29261100, "");
SYMBOL_CRC(__drmm_add_action, 0x6c96893d, "");
SYMBOL_CRC(__drmm_add_action_or_reset, 0xe91aa11b, "");
SYMBOL_CRC(__drmm_mutex_release, 0x60a4d265, "");
SYMBOL_CRC(drmm_kfree, 0xe3dac495, "");
SYMBOL_CRC(drmm_kmalloc, 0x7f8382f8, "");
SYMBOL_CRC(drmm_kstrdup, 0xa09d180d, "_gpl");
SYMBOL_CRC(drm_vblank_work_cancel_sync, 0xa947c1e1, "");
SYMBOL_CRC(drm_vblank_work_flush, 0x602ad97a, "");
SYMBOL_CRC(drm_vblank_work_init, 0xcf5133b3, "");
SYMBOL_CRC(drm_vblank_work_schedule, 0x8724282f, "");
SYMBOL_CRC(drm_panel_add, 0xf1cd82ff, "");
SYMBOL_CRC(drm_panel_disable, 0xa10b7627, "");
SYMBOL_CRC(drm_panel_enable, 0xe2dd8c52, "");
SYMBOL_CRC(drm_panel_get_modes, 0x53fe5499, "");
SYMBOL_CRC(drm_panel_init, 0x8dff396f, "");
SYMBOL_CRC(drm_panel_of_backlight, 0xbaf650fc, "");
SYMBOL_CRC(drm_panel_prepare, 0x8532ea3c, "");
SYMBOL_CRC(drm_panel_remove, 0xb60f9287, "");
SYMBOL_CRC(drm_panel_unprepare, 0xa35355c0, "");
SYMBOL_CRC(of_drm_find_panel, 0xfb389378, "");
SYMBOL_CRC(of_drm_get_panel_orientation, 0xc7b0dffa, "");
SYMBOL_CRC(drm_of_component_probe, 0xfbf6fd96, "");
SYMBOL_CRC(drm_of_crtc_port_mask, 0x84ba55cb, "");
SYMBOL_CRC(drm_of_find_possible_crtcs, 0x46ff28c4, "");
SYMBOL_CRC(drm_of_component_match_add, 0x045951fa, "_gpl");
SYMBOL_CRC(drm_of_encoder_active_endpoint, 0x9e52493d, "_gpl");
SYMBOL_CRC(drm_of_find_panel_or_bridge, 0x1e20634d, "_gpl");
SYMBOL_CRC(drm_of_get_data_lanes_count, 0x33abf348, "_gpl");
SYMBOL_CRC(drm_of_get_data_lanes_count_ep, 0xc0c0c7b3, "_gpl");
SYMBOL_CRC(drm_of_lvds_get_data_mapping, 0x45e930c9, "_gpl");
SYMBOL_CRC(drm_of_lvds_get_dual_link_pixel_order, 0x738140e1, "_gpl");
SYMBOL_CRC(drm_debugfs_create_files, 0x4083c6b2, "");
SYMBOL_CRC(drm_debugfs_remove_files, 0x5b512c73, "");
SYMBOL_CRC(drm_crtc_add_crc_entry, 0xb5a06a60, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0x421d4dcf, "krealloc" },
	{ 0xa5684076, "ida_alloc_range" },
	{ 0x5a6d5863, "try_module_get" },
	{ 0x9836dc68, "anon_inode_getfile" },
	{ 0xaf19e0d5, "ww_mutex_lock_interruptible" },
	{ 0x34884a57, "alloc_anon_inode" },
	{ 0x493ee2e7, "show_class_attr_string" },
	{ 0xb5aceb9d, "kthread_cancel_work_sync" },
	{ 0x7c4df4ed, "kthread_create_worker" },
	{ 0x551bd071, "__rb_erase_color" },
	{ 0xc8168b34, "kthread_flush_work" },
	{ 0x4756260d, "ida_destroy" },
	{ 0x1697d536, "__class_create" },
	{ 0x47925794, "idr_find" },
	{ 0x4d431a30, "param_ops_ulong" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0xee54f561, "dev_set_name" },
	{ 0x99bb8806, "memmove" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xf1ef43e9, "component_master_add_with_match" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x4676d27, "trace_raw_output_prep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6fd1f796, "dma_resv_init" },
	{ 0xb0f8a1fb, "vm_get_page_prot" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8441c8cb, "sg_free_table" },
	{ 0x6cd55457, "dma_resv_wait_timeout" },
	{ 0x216d759a, "mmiocpy" },
	{ 0xacaaba89, "device_unregister" },
	{ 0xca9360b5, "rb_next" },
	{ 0x8b618d08, "overflowuid" },
	{ 0x8dd4f313, "__trace_trigger_soft_disabled" },
	{ 0xedc1ac5, "kthread_flush_worker" },
	{ 0x49970de8, "finish_wait" },
	{ 0x6749d53f, "hdmi_vendor_infoframe_init" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xca3ce6df, "class_destroy" },
	{ 0xc4ea270a, "trace_event_printf" },
	{ 0x1099f2, "of_graph_is_present" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x6fbe4717, "idr_replace" },
	{ 0xd63fafc2, "div64_u64_rem" },
	{ 0xa0d2aa3f, "ww_mutex_unlock" },
	{ 0xb312e47e, "device_initialize" },
	{ 0x75d0deb9, "nsecs_to_jiffies64" },
	{ 0x37d2adfd, "fd_install" },
	{ 0x6e4e7714, "dma_fence_chain_ops" },
	{ 0xe7aafa7c, "of_graph_parse_endpoint" },
	{ 0x74e895b3, "trace_event_raw_init" },
	{ 0x9d669763, "memcpy" },
	{ 0x12d1847e, "unmap_mapping_range" },
	{ 0x37a0cba, "kfree" },
	{ 0x16aad2d5, "iput" },
	{ 0x74d4d69, "seq_lseek" },
	{ 0x4a87235d, "of_graph_get_remote_port_parent" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x649837, "of_graph_get_remote_port" },
	{ 0xddf0ca1d, "__pagevec_release" },
	{ 0x637493f3, "__wake_up" },
	{ 0x1c777c5c, "dma_fence_add_callback" },
	{ 0x9ed7734c, "synchronize_srcu" },
	{ 0x51943974, "get_device" },
	{ 0xd912cf9c, "dma_buf_attach" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xf93b4b4e, "class_create_file_ns" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x5c0cd71f, "of_graph_get_endpoint_by_regs" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0xe4296f92, "wake_up_process" },
	{ 0x801c7bcb, "dev_driver_string" },
	{ 0x3323213, "trace_event_buffer_commit" },
	{ 0x92997ed8, "_printk" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x4ac3f1cf, "ww_mutex_trylock" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x1874f36c, "devm_of_find_backlight" },
	{ 0x308629fc, "of_get_next_child" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x572ded01, "dma_max_mapping_size" },
	{ 0x2c6007e1, "put_device" },
	{ 0xf82ec573, "rb_prev" },
	{ 0x75765d93, "dma_buf_export" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0xa420f137, "dma_buf_map_attachment" },
	{ 0xa1ac4c, "kthread_queue_work" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x65d411e9, "idr_get_next" },
	{ 0x41bb84fc, "dma_fence_remove_callback" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xe61a6643, "__current" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0xc6cbbc89, "capable" },
	{ 0x1449535e, "module_put" },
	{ 0xcfa69a7e, "atomic_dec_and_mutex_lock" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x4091ed3e, "devm_add_action" },
	{ 0x305d2083, "sysfs_create_link" },
	{ 0x365e7911, "kstrdup_const" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0x800473f, "__cond_resched" },
	{ 0xa346975c, "idr_remove" },
	{ 0xc0fb357a, "dma_fence_chain_walk" },
	{ 0xcb83dc2c, "mark_page_accessed" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xdc2afdda, "__task_pid_nr_ns" },
	{ 0x4e7cbc7e, "kobject_uevent_env" },
	{ 0x9b6eb137, "ksize" },
	{ 0xc924678a, "__kmalloc_node_track_caller" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x2435a005, "shmem_file_setup" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe842dc8c, "dma_fence_get_stub" },
	{ 0x2e439142, "drm_get_panel_orientation_quirk" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0xd7d82541, "perf_trace_run_bpf_submit" },
	{ 0x8b1e52b6, "fput" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xaacc9e27, "sort" },
	{ 0xb6b10a76, "dma_buf_unmap_attachment" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0xc33aa545, "device_add" },
	{ 0x7505bdef, "memchr_inv" },
	{ 0x6b0d3011, "__of_parse_phandle_with_args" },
	{ 0xd1f3e39c, "sysfs_remove_link" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0xa4f1a05a, "pid_task" },
	{ 0x86b15658, "__srcu_read_lock" },
	{ 0x587b0954, "kvasprintf" },
	{ 0xa1d8004a, "videomode_from_timing" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xec40dc18, "noop_llseek" },
	{ 0x50fd6103, "dma_fence_signal" },
	{ 0x8950b121, "dma_resv_fini" },
	{ 0x954f099c, "idr_preload" },
	{ 0x7a79b9f3, "__sg_page_iter_next" },
	{ 0xa69d151c, "_raw_write_lock" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x120b336a, "__rb_insert_augmented" },
	{ 0xfc3f3589, "strscpy_pad" },
	{ 0x25a8b9ff, "dma_buf_get" },
	{ 0x8e9e820e, "debugfs_remove" },
	{ 0x84b183ae, "strncmp" },
	{ 0x3e0c5d74, "ww_mutex_lock" },
	{ 0x9e1b61bc, "trace_event_reg" },
	{ 0x328a05f1, "strncpy" },
	{ 0xb5fdc18f, "mutex_is_locked" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xa1721e96, "shmem_read_mapping_page_gfp" },
	{ 0x661ffe2f, "of_property_count_elems_of_size" },
	{ 0xe643511, "dma_buf_put" },
	{ 0xa24491bf, "ida_free" },
	{ 0xca6ecb0c, "dma_buf_fd" },
	{ 0x2513ff15, "of_property_read_string" },
	{ 0x8ebf658, "of_find_property" },
	{ 0x8bc8d3e5, "of_graph_get_next_endpoint" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0x71c90087, "memcmp" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x514209cc, "of_device_is_available" },
	{ 0x3f62d048, "dma_fence_init" },
	{ 0xcedc99af, "mutex_lock_interruptible" },
	{ 0xa1aeb3, "of_graph_get_remote_node" },
	{ 0xab781570, "fb_get_options" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xc8d1d2, "device_register" },
	{ 0x1cfee4f1, "device_del" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0xb4c3f95c, "sg_alloc_table_from_pages_segment" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0x5f754e5a, "memset" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x407136b1, "__put_user_8" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xcb510bc2, "complete_all" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf474fdcb, "kfree_const" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x7fe32873, "rb_replace_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xb1bf3424, "component_release_of" },
	{ 0x77133639, "set_page_dirty" },
	{ 0x25266b60, "init_pseudo" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xb825d8f6, "seq_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x25e58a09, "hdmi_avi_infoframe_init" },
	{ 0x246790df, "idr_for_each" },
	{ 0xeea0399, "strscpy" },
	{ 0xa81f2ce4, "debugfs_create_file" },
	{ 0xac1c7622, "trace_event_buffer_reserve" },
	{ 0x3f8338b6, "dma_map_sgtable" },
	{ 0x9dfc2e89, "kthread_destroy_worker" },
	{ 0xdfbe0f5f, "component_match_add_release" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xcbead8c5, "generic_atomic64_read" },
	{ 0x6a877a59, "__dma_fence_unwrap_merge" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x97106714, "memdup_user_nul" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0x7288b0e5, "dentry_open" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xe091c977, "list_sort" },
	{ 0xe06699b2, "sg_next" },
	{ 0xa719e4bf, "of_get_videomode" },
	{ 0xb58cea90, "__register_chrdev" },
	{ 0x5855b740, "__sg_page_iter_start" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xd15c3500, "seq_write" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x1d6408f9, "platform_bus_type" },
	{ 0x7e2c085, "radix_tree_tagged" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4418ca21, "seq_printf" },
	{ 0xc8e173ed, "_find_next_bit_le" },
	{ 0x7ef6f69e, "__srcu_read_unlock" },
	{ 0x5bda4214, "_raw_read_lock" },
	{ 0xf58bc2a5, "i2c_transfer" },
	{ 0xe2aeb5dd, "dma_fence_allocate_private_stub" },
	{ 0x651625de, "dma_buf_detach" },
	{ 0x45fdee7f, "dma_fence_signal_timestamp" },
	{ 0x74ec66d7, "dma_fence_chain_init" },
	{ 0x46372883, "seq_puts" },
	{ 0x34937f96, "single_release" },
	{ 0x362971c5, "check_move_unevictable_pages" },
	{ 0x95a8ce2d, "pid_vnr" },
	{ 0xf416746, "sched_set_fifo" },
	{ 0x493c52dc, "of_node_name_eq" },
	{ 0xef3a6a62, "simple_release_fs" },
	{ 0x7d5fc59d, "dma_unmap_sg_attrs" },
	{ 0x8392a1af, "kill_anon_super" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0x7efebfd8, "fwnode_handle_put" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x9d5cd559, "reservation_ww_class" },
	{ 0x97255bdf, "strlen" },
	{ 0xc94d8e3b, "iomem_resource" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe1c8804, "dma_fence_chain_find_seqno" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0xd37e9c2, "_dev_printk" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xf01014b6, "single_open" },
	{ 0x349cba85, "strchr" },
	{ 0x9fafa4fb, "mem_map" },
	{ 0xeca42068, "debugfs_create_dir" },
	{ 0x4ae4635, "trace_handle_return" },
	{ 0xa4b7f2cc, "sync_file_get_fence" },
	{ 0x6390d26a, "put_pid" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xbafd25be, "pci_bus_type" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x6d881014, "of_get_display_timing" },
	{ 0x204032bc, "class_remove_file_ns" },
	{ 0x9ce561c8, "generic_atomic64_add" },
	{ 0xce5e63d1, "simple_pin_fs" },
	{ 0x1818d744, "sync_file_create" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x92b57248, "flush_work" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xcc3b2cc9, "__sg_page_iter_dma_next" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "drm_panel_orientation_quirks");


MODULE_INFO(srcversion, "C60443A99A422D284425B81");
