/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_0_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO0_0_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_13_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO0_13_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_14_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO0_14_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_16_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO0_16_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_26_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_29_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 1. */
#define PIO0_29_FUNC_ALT1 0x01u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_30_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 1. */
#define PIO0_30_FUNC_ALT1 0x01u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO1_2_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 6. */
#define PIO1_2_FUNC_ALT6 0x06u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO1_31_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO1_31_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO1_3_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 6. */
#define PIO1_3_FUNC_ALT6 0x06u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO1_4_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO1_4_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO1_6_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO1_6_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO1_8_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO1_8_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO1_9_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO1_9_FUNC_ALT0 0x00u

/*! @name PIO1_9 (number 10), SW3/J12[2]/ARD_BTN_USR_P1_9
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_RADIO_NSS_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_RADIO_NSS_GPIO_PIN_MASK (1U << 9U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_RADIO_NSS_PORT 1U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_RADIO_NSS_PIN 9U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_RADIO_NSS_PIN_MASK (1U << 9U)      /*!<@brief PORT pin mask */
                                                          /* @} */

/*! @name PIO1_8 (number 24), J9[20]/ARD_P1_8
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_RADIO_ANT_SW_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_RADIO_ANT_SW_GPIO_PIN_MASK (1U << 8U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_RADIO_ANT_SW_PORT 1U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_RADIO_ANT_SW_PIN 8U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_RADIO_ANT_SW_PIN_MASK (1U << 8U)      /*!<@brief PORT pin mask */
                                                             /* @} */

/*! @name PIO0_16 (number 14), NOT_CONNECTED
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_RADIO_RESET_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_RADIO_RESET_GPIO_PIN_MASK (1U << 16U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_RADIO_RESET_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_RADIO_RESET_PIN 16U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_RADIO_RESET_PIN_MASK (1U << 16U)      /*!<@brief PORT pin mask */
                                                             /* @} */

/*! @name PIO1_6 (number 5), Q4[G1]/J12[10]/ARD_LEDB_PWM
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_RADIO_BUSY_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_RADIO_BUSY_GPIO_PIN_MASK (1U << 6U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_RADIO_BUSY_PORT 1U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_RADIO_BUSY_PIN 6U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_RADIO_BUSY_PIN_MASK (1U << 6U)      /*!<@brief PORT pin mask */
                                                           /* @} */

/*! @name HS_SPI_SCK (number 61), NOT_CONNECTED
  @{ */
/* @} */

/*! @name HS_SPI_MOSI (number 60), NOT_CONNECTED
  @{ */
/* @} */

/*! @name HS_SPI_MISO (number 62), NOT_CONNECTED
  @{ */
/* @} */

/*! @name FC0_RXD_SDA_MOSI_DATA (number 92), MCU_RX
  @{ */
/* @} */

/*! @name FC0_TXD_SCL_MISO_WS (number 94), MCU_TX
  @{ */
/* @} */

/*! @name PIO1_4 (number 1), Q5[G1]/J12[6]/ARD_LEDR_PWM
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_RADIO_DIO1_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_RADIO_DIO1_GPIO_PIN_MASK (1U << 4U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_RADIO_DIO1_PORT 1U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_RADIO_DIO1_PIN 4U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_RADIO_DIO1_PIN_MASK (1U << 4U)      /*!<@brief PORT pin mask */
                                                           /* @} */

/*! @name PIO0_0 (number 54), NOT_CONNECTED
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_RADIO_DEVICE_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_RADIO_DEVICE_GPIO_PIN_MASK (1U << 0U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_RADIO_DEVICE_PORT 0U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_RADIO_DEVICE_PIN 0U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_RADIO_DEVICE_PIN_MASK (1U << 0U)      /*!<@brief PORT pin mask */
                                                             /* @} */

/*! @name PIO1_31 (number 91), DIO_0
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_RFM96_DIO_0_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_RFM96_DIO_0_GPIO_PIN_MASK (1U << 31U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_RFM96_DIO_0_PORT 1U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_RFM96_DIO_0_PIN 31U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_RFM96_DIO_0_PIN_MASK (1U << 31U)      /*!<@brief PORT pin mask */
                                                             /* @} */

/*! @name PIO0_13 (number 71), DIO_1
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_RFM96_DIO_1_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_RFM96_DIO_1_GPIO_PIN_MASK (1U << 13U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_RFM96_DIO_1_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_RFM96_DIO_1_PIN 13U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_RFM96_DIO_1_PIN_MASK (1U << 13U)      /*!<@brief PORT pin mask */
                                                             /* @} */

/*! @name PIO0_14 (number 72), DIO_2
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_RFM96_DIO_2_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_RFM96_DIO_2_GPIO_PIN_MASK (1U << 14U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_RFM96_DIO_2_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_RFM96_DIO_2_PIN 14U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_RFM96_DIO_2_PIN_MASK (1U << 14U)      /*!<@brief PORT pin mask */
                                                             /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void); /* Function assigned for the Cortex-M33 */

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
