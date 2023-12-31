/*
 * STM32F407xx_GPIO_Driver_Private_Definitions.h
 *
 *  Created on: Oct 19, 2023
 *      Author: Ubaid
 */

#ifndef STM32F407XX_GPIO_DRIVER_PRIVATE_H_
#define STM32F407XX_GPIO_DRIVER_PRIVATE_H_

#include "STM32F407xx_Board_Definitions_Private.h"

/*
 * This is a Configuration structure for a GPIO pin
 */
struct GPIO_PinConfig_t {
	uint8_t GPIO_PinNumber;
	uint8_t GPIO_PinMode; /*!< possible values from @GPIO_PIN_MODES >*/
	uint8_t GPIO_PinSpeed; /*!< possible values from @GPIO_PIN_SPEED >*/
	uint8_t GPIO_PinPuPdControl;
	uint8_t GPIO_PinOPType;
	uint8_t GPIO_PinAltFunMode;
};

/*
 * This is a Handle structure for a GPIO pin
 */

//typedef struct
//{
//	GPIO_RegDef_t pGPIOx;       		/*!< This holds the base address of the GPIO port to which the pin belongs >*/
//	GPIO_PinConfig_t GPIO_PinConfig;   /*!< This holds GPIO pin configuration settings >*/
//
//}GPIO_Handle_t;
//
///*
// * Peripheral Clock setup
// */
//void GPIO_PeriClockControl(GPIO_RegDef_t *pGPIOx, uint8_t EnorDi);

#endif /* STM32F407XX_GPIO_DRIVER_H_ */
