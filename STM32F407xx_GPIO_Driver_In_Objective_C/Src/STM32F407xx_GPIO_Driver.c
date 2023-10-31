/*
 * STM32F407xx_GPIO_Driver.c
 *
 *  Created on: Oct 19, 2023
 *      Author: Ubaid
 */
#include <stdio.h>
#include<stdint.h>
#include <STM32F407xx_GPIO_Driver_Definitions_Public.h>
#include <STM32F407xx_GPIO_Driver_Definitions_Private.h>

void GPIO_PeriClockControl(GPIO_RegDef_t *pGPIOx, uint8_t EnorDi)
{
	if(EnorDi == ENABLE)
	{
		if(pGPIOx == GPIOA)
		{
			GPIOA_PCLK_EN();
		}
		else if(pGPIOx == GPIOB)
		{
			GPIOB_PCLK_EN();
		}
		else if(pGPIOx == GPIOC)
		{
			GPIOC_PCLK_EN();
		}
		else if(pGPIOx == GPIOD)
		{
			GPIOD_PCLK_EN();
		}
		else if(pGPIOx == GPIOE)
		{
			GPIOE_PCLK_EN();
		}
		else if(pGPIOx == GPIOF)
		{
			GPIOF_PCLK_EN();
		}
		else if(pGPIOx == GPIOG)
		{
			GPIOG_PCLK_EN();
		}
		else if(pGPIOx == GPIOH)
		{
			GPIOH_PCLK_EN();
		}
		else if(pGPIOx == GPIOI)
		{
			GPIOI_PCLK_EN();
		}
		else
		{
			/* Handle default error*/
		}
	}
	else
	{
		if(pGPIOx == GPIOA)
		{
			GPIOA_PCLK_DI();
		}
		else if(pGPIOx == GPIOB)
		{
			GPIOB_PCLK_DI();
		}
		else if(pGPIOx == GPIOC)
		{
			GPIOC_PCLK_DI();
		}
		else if(pGPIOx == GPIOD)
		{
			GPIOD_PCLK_DI();
		}
		else if(pGPIOx == GPIOE)
		{
			GPIOE_PCLK_DI();
		}
		else if(pGPIOx == GPIOF)
		{
			GPIOF_PCLK_DI();
		}
		else if(pGPIOx == GPIOG)
		{
			GPIOG_PCLK_DI();
		}
		else if(pGPIOx == GPIOH)
		{
			GPIOH_PCLK_DI();
		}
		else if(pGPIOx == GPIOI)
		{
			GPIOI_PCLK_DI();
		}
		else
		{
			/* Handle default error*/
		}

	}
}

void GPIO_Init(GPIO_Config_UserHandle_t UserHandle)
{
	GPIO_Handle_t initializer = {0};
	uint32_t temp_var = 0;
	//Create & Initialize private data
	UserHandle.Private_GPIO_Data = (GPIO_RegDef_t*) malloc(sizeof(GPIO_RegDef_t));

	//point to requested GPIO base address to init private instance and enable clock
	if(UserHandle.GPIO_PORT == PORT_GPIOA)
	{
		UserHandle.Private_GPIO_Data = GPIOA;
		GPIO_PeriClockControl(GPIOA,ENABLE);
	}
	else if(UserHandle.GPIO_PORT == PORT_GPIOB)
	{
		UserHandle.Private_GPIO_Data = GPIOB;
		GPIO_PeriClockControl(GPIOB,ENABLE);
	}
	else if(UserHandle.GPIO_PORT == PORT_GPIOC)
	{
		UserHandle.Private_GPIO_Data = GPIOC;
		GPIO_PeriClockControl(GPIOC,ENABLE);
	}
	else if(UserHandle.GPIO_PORT == PORT_GPIOD)
	{
		UserHandle.Private_GPIO_Data = GPIOD;
		GPIO_PeriClockControl(GPIOD,ENABLE);
	}
	else if(UserHandle.GPIO_PORT == PORT_GPIOE)
	{
		UserHandle.Private_GPIO_Data = GPIOE;
		GPIO_PeriClockControl(GPIOE,ENABLE);
	}
	else if(UserHandle.GPIO_PORT == PORT_GPIOF)
	{
		UserHandle.Private_GPIO_Data = GPIOF;
		GPIO_PeriClockControl(GPIOF,ENABLE);
	}
	else if(UserHandle.GPIO_PORT == PORT_GPIOG)
	{
		UserHandle.Private_GPIO_Data = GPIOG;
		GPIO_PeriClockControl(GPIOG,ENABLE);
	}
	else if(UserHandle.GPIO_PORT == PORT_GPIOH)
	{
		UserHandle.Private_GPIO_Data = GPIOH;
		GPIO_PeriClockControl(GPIOH,ENABLE);
	}
	else if(UserHandle.GPIO_PORT == PORT_GPIOI)
	{
		UserHandle.Private_GPIO_Data = GPIOI;
		GPIO_PeriClockControl(GPIOI,ENABLE);
	}



//	2. configure MODE of GPIO

}





