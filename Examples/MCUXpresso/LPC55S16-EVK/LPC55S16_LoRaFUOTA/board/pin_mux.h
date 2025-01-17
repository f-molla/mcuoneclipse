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
 * @brief Analog switch is open (disabled) */
#define IOCON_PIO_ASW_DI 0x00u
/*!
 * @brief Enables digital function */
#define IOCON_PIO_DIGITAL_EN 0x0100u
/*!
 * @brief IO is an open drain cell */
#define IOCON_PIO_ECS_DI 0x00u
/*!
 * @brief GPIO mode */
#define IOCON_PIO_EGP_GPIO 0x4000u
/*!
 * @brief Selects pin function 0 */
#define IOCON_PIO_FUNC0 0x00u
/*!
 * @brief Selects pin function 1 */
#define IOCON_PIO_FUNC1 0x01u
/*!
 * @brief Selects pin function 5 */
#define IOCON_PIO_FUNC5 0x05u
/*!
 * @brief Selects pin function 6 */
#define IOCON_PIO_FUNC6 0x06u
/*!
 * @brief Selects pin function 9 */
#define IOCON_PIO_FUNC9 0x09u
/*!
 * @brief I2C 50 ns glitch filter enabled. Typically used for Standard mode, Fast-mode and Fast-mode Plus I2C. */
#define IOCON_PIO_I2CFILTER_NONHIGHSPEED 0x00u
/*!
 * @brief Input filter disabled */
#define IOCON_PIO_INPFILT_OFF 0x1000u
/*!
 * @brief Input function is not inverted */
#define IOCON_PIO_INV_DI 0x00u
/*!
 * @brief No addition pin function */
#define IOCON_PIO_MODE_INACT 0x00u
/*!
 * @brief Open drain is disabled */
#define IOCON_PIO_OPENDRAIN_DI 0x00u
/*!
 * @brief Standard mode, output slew rate control is enabled */
#define IOCON_PIO_SLEW_STANDARD 0x00u
/*!
 * @brief 3V3 signaling in I2C mode */
#define IOCON_PIO_SSEL_3V3 0x00u

/*! @name FC0_RXD_SDA_MOSI_DATA (number 92), MCU_RX
  @{ */
/* @} */

/*! @name FC0_TXD_SCL_MISO_WS (number 94), MCU_TX
  @{ */
/* @} */

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

/*! @name PIO0_16 (number 14), J7[1]/J13[1]/JP4[1]/ARD_MIK_ADC0_8_N
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

/*! @name FC1_RXD_SDA_MOSI_DATA (number 71), RADIO_SPI_MOSI
  @{ */
/* @} */

/*! @name FC1_TXD_SCL_MISO_WS (number 72), RADIO_SPI_MISO
  @{ */
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
