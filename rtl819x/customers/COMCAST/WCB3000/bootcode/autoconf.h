/*
 * Automatically generated by make menuconfig: don't edit
 */
#define AUTOCONF_INCLUDED

/*
 * Target Platform Selection
 */
#undef  CONFIG_RTL8196B
#undef  CONFIG_RTL8196C
#define CONFIG_RTL8198_ 1
#undef  CONFIG_RTL89xxC
#define RTL8196 1
#define RTL8198 1
#define CONFIG_RTL8198_REVISION_B 1
#define CONFIG_RTL8198 1
#undef  CONFIG_D8_16
#undef  CONFIG_D16_16
#undef  CONFIG_D32_16
#define CONFIG_D64_16 1
#undef  CONFIG_D128_16
#undef  CONFIG_D8_16x2
#undef  CONFIG_D16_16x2
#undef  CONFIG_D32_16x2
#undef  CONFIG_NOR_FLASH
#define CONFIG_SPI_FLASH 1
#undef  CONFIG_NONE_FLASH
#define CONFIG_BOOT_SIO_8198 1
#undef  CONFIG_BOOT_DIO_8198
#undef  CONFIG_BOOT_QIO_8198
#define CONFIG_AUTO_PROBE_LIMITED_SPI_CLK_UNDER_40MHZ 1
#define CONFIG_SPI_STD_MODE 1
#undef  CONFIG_SDRAM
#undef  CONFIG_DDR1_SDRAM
#define CONFIG_DDR2_SDRAM 1
#define CONFIG_DDR_SDRAM 1
#undef  CONFIG_SERIAL_SC16IS7X0
#define CONFIG_SPI_FLASH_NUMBER 1
#define CONFIG_FLASH_NUMBER 0x1
#define CONFIG_RTL_FLASH_MAPPING_ENABLE 1
#define CONFIG_LINUX_IMAGE_OFFSET_START 0x50000
#define CONFIG_LINUX_IMAGE_OFFSET_END 0x80000
#define CONFIG_LINUX_IMAGE_OFFSET_STEP 0x1000
#define CONFIG_ROOT_IMAGE_OFFSET_START 0x1B0000
#define CONFIG_ROOT_IMAGE_OFFSET_END 0x230000
#define CONFIG_ROOT_IMAGE_OFFSET_STEP 0x1000
#define CONFIG_RTL_FLASH_DUAL_IMAGE_ENABLE 1
#define CONFIG_RTL_FLASH_DUAL_IMAGE_OFFSET 0x800000
#define CONFIG_AEI_FLASH_DATA_START 0x800000
#define CONFIG_BOOT_CODE_SIZE_CHECK 1
#define CONFIG_BOOT_CODE_SIZE 0x10000
#define CONFIG_LZMA_ENABLE 1
#undef  CONFIG_DHCP_SERVER
#undef  CONFIG_HTTP_SERVER
#undef  CONFIG_POST_ENABLE
#undef  CONFIG_BOOT_DEBUG_ENABLE
#define CONFIG_BOOT_RESET_ENABLE 1
#undef  CONFIG_BOOT_TIME_MEASURE
#undef  CONFIG_RTL8196C_POCKET_AP
#undef  CONFIG_OSK
#undef  CONFIG_NFBI
#undef  CONFIG_USING_JTAG
