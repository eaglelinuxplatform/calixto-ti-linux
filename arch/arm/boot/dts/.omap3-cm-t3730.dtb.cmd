cmd_arch/arm/boot/dts/omap3-cm-t3730.dtb := gcc -E -Wp,-MMD,arch/arm/boot/dts/.omap3-cm-t3730.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.omap3-cm-t3730.dtb.dts.tmp arch/arm/boot/dts/omap3-cm-t3730.dts ; ./scripts/dtc/dtc -o arch/arm/boot/dts/omap3-cm-t3730.dtb -b 0 -iarch/arm/boot/dts/ -i./scripts/dtc/include-prefixes -Wno-interrupt_provider -Wno-unit_address_vs_reg -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address   -d arch/arm/boot/dts/.omap3-cm-t3730.dtb.d.dtc.tmp arch/arm/boot/dts/.omap3-cm-t3730.dtb.dts.tmp ; cat arch/arm/boot/dts/.omap3-cm-t3730.dtb.d.pre.tmp arch/arm/boot/dts/.omap3-cm-t3730.dtb.d.dtc.tmp > arch/arm/boot/dts/.omap3-cm-t3730.dtb.d

source_arch/arm/boot/dts/omap3-cm-t3730.dtb := arch/arm/boot/dts/omap3-cm-t3730.dts

deps_arch/arm/boot/dts/omap3-cm-t3730.dtb := \
  arch/arm/boot/dts/omap36xx.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/bus/ti-sysc.h \
  scripts/dtc/include-prefixes/dt-bindings/media/omap3-isp.h \
  arch/arm/boot/dts/omap3.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  scripts/dtc/include-prefixes/dt-bindings/pinctrl/omap.h \
  arch/arm/boot/dts/omap3xxx-clocks.dtsi \
  arch/arm/boot/dts/omap3-cpu-thermal.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/thermal/thermal.h \
  arch/arm/boot/dts/omap3-cm-t3x30.dtsi \
  arch/arm/boot/dts/omap3-cm-t3x.dtsi \
  arch/arm/boot/dts/omap-gpmc-smsc911x.dtsi \
  arch/arm/boot/dts/twl4030.dtsi \
  arch/arm/boot/dts/twl4030_omap3.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/input/input.h \
  scripts/dtc/include-prefixes/dt-bindings/input/linux-event-codes.h \
  arch/arm/boot/dts/omap34xx-omap36xx-clocks.dtsi \
  arch/arm/boot/dts/omap36xx-omap3430es2plus-clocks.dtsi \
  arch/arm/boot/dts/omap36xx-am35xx-omap3430es2plus-clocks.dtsi \
  arch/arm/boot/dts/omap36xx-clocks.dtsi \

arch/arm/boot/dts/omap3-cm-t3730.dtb: $(deps_arch/arm/boot/dts/omap3-cm-t3730.dtb)

$(deps_arch/arm/boot/dts/omap3-cm-t3730.dtb):
