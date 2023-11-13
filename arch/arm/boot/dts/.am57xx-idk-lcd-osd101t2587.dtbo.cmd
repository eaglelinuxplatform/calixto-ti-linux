cmd_arch/arm/boot/dts/am57xx-idk-lcd-osd101t2587.dtbo := gcc -E -Wp,-MMD,arch/arm/boot/dts/.am57xx-idk-lcd-osd101t2587.dtbo.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.am57xx-idk-lcd-osd101t2587.dtbo.dts.tmp arch/arm/boot/dts/am57xx-idk-lcd-osd101t2587.dtso ; ./scripts/dtc/dtc -o arch/arm/boot/dts/am57xx-idk-lcd-osd101t2587.dtbo -b 0 -iarch/arm/boot/dts/ -i./scripts/dtc/include-prefixes -Wno-interrupt_provider -Wno-unit_address_vs_reg -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address   -d arch/arm/boot/dts/.am57xx-idk-lcd-osd101t2587.dtbo.d.dtc.tmp arch/arm/boot/dts/.am57xx-idk-lcd-osd101t2587.dtbo.dts.tmp ; cat arch/arm/boot/dts/.am57xx-idk-lcd-osd101t2587.dtbo.d.pre.tmp arch/arm/boot/dts/.am57xx-idk-lcd-osd101t2587.dtbo.d.dtc.tmp > arch/arm/boot/dts/.am57xx-idk-lcd-osd101t2587.dtbo.d

source_arch/arm/boot/dts/am57xx-idk-lcd-osd101t2587.dtbo := arch/arm/boot/dts/am57xx-idk-lcd-osd101t2587.dtso

deps_arch/arm/boot/dts/am57xx-idk-lcd-osd101t2587.dtbo := \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \

arch/arm/boot/dts/am57xx-idk-lcd-osd101t2587.dtbo: $(deps_arch/arm/boot/dts/am57xx-idk-lcd-osd101t2587.dtbo)

$(deps_arch/arm/boot/dts/am57xx-idk-lcd-osd101t2587.dtbo):
