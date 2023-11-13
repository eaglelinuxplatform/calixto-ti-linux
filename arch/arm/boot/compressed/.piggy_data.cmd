cmd_arch/arm/boot/compressed/piggy_data := { cat arch/arm/boot/compressed/../Image | lzma -9; printf \\354\\175\\000\\001; } > arch/arm/boot/compressed/piggy_data
