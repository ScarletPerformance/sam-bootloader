#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define VENDOR_NAME "Scarlet Performance"
#define PRODUCT_NAME "OpenCCM Elite"
#define VOLUME_LABEL "CCM4BOOT"
#define INDEX_URL "https://www.scarletperformance.com/"
#define BOARD_ID "SAME51N20A-OpenCCM-Elite"

#define USB_VID 0xF055 //Using USB-IF's "USB-IF" vendor ID until we get ours.
#define USB_PID 0x0001

#define BOOT_USART_MODULE                 SERCOM5
#define BOOT_USART_MASK                   APBAMASK
#define BOOT_USART_BUS_CLOCK_INDEX        MCLK_APBAMASK_SERCOM5
#define BOOT_USART_PAD_SETTINGS           UART_RX_PAD1_TX_PAD0
#define BOOT_USART_PAD3                   PINMUX_UNUSED
#define BOOT_USART_PAD2                   PINMUX_UNUSED
#define BOOT_USART_PAD1                   PINMUX_PB17C_SERCOM5_PAD1
#define BOOT_USART_PAD0                   PINMUX_PB16C_SERCOM5_PAD0
#define BOOT_GCLK_ID_CORE                 SERCOM5_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW                 SERCOM5_GCLK_ID_SLOW

#endif
