cmd_arch/arm/boot/dts/am57xx-idk-lcd-osd101t2045.dtbo := gcc -E -Wp,-MMD,arch/arm/boot/dts/.am57xx-idk-lcd-osd101t2045.dtbo.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.am57xx-idk-lcd-osd101t2045.dtbo.dts.tmp arch/arm/boot/dts/am57xx-idk-lcd-osd101t2045.dtso ; ./scripts/dtc/dtc -o arch/arm/boot/dts/am57xx-idk-lcd-osd101t2045.dtbo -b 0 -iarch/arm/boot/dts/ -i./scripts/dtc/include-prefixes -Wno-interrupt_provider -Wno-unit_address_vs_reg -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address   -d arch/arm/boot/dts/.am57xx-idk-lcd-osd101t2045.dtbo.d.dtc.tmp arch/arm/boot/dts/.am57xx-idk-lcd-osd101t2045.dtbo.dts.tmp ; cat arch/arm/boot/dts/.am57xx-idk-lcd-osd101t2045.dtbo.d.pre.tmp arch/arm/boot/dts/.am57xx-idk-lcd-osd101t2045.dtbo.d.dtc.tmp > arch/arm/boot/dts/.am57xx-idk-lcd-osd101t2045.dtbo.d

source_arch/arm/boot/dts/am57xx-idk-lcd-osd101t2045.dtbo := arch/arm/boot/dts/am57xx-idk-lcd-osd101t2045.dtso

deps_arch/arm/boot/dts/am57xx-idk-lcd-osd101t2045.dtbo := \

arch/arm/boot/dts/am57xx-idk-lcd-osd101t2045.dtbo: $(deps_arch/arm/boot/dts/am57xx-idk-lcd-osd101t2045.dtbo)

$(deps_arch/arm/boot/dts/am57xx-idk-lcd-osd101t2045.dtbo):
