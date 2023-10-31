################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/STM32F407xx_GPIO_Driver.c \
../Src/main.c \
../Src/syscalls.c \
../Src/sysmem.c 

OBJS += \
./Src/STM32F407xx_GPIO_Driver.o \
./Src/main.o \
./Src/syscalls.o \
./Src/sysmem.o 

C_DEPS += \
./Src/STM32F407xx_GPIO_Driver.d \
./Src/main.d \
./Src/syscalls.d \
./Src/sysmem.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o Src/%.su Src/%.cyclo: ../Src/%.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F407G_DISC1 -DSTM32F4 -DSTM32F407VGTx -c -I../Inc -I"C:/Embedded_Projects/STM_Workspaces/Objective_C_Projects/STM32F407xx_HAL_In_Objective_C/STM32F407xx_GPIO_Driver_In_Objective_C/drivers_stm32f407/Src" -I"C:/Embedded_Projects/STM_Workspaces/Objective_C_Projects/STM32F407xx_HAL_In_Objective_C/STM32F407xx_GPIO_Driver_In_Objective_C/drivers_stm32f407/Public_Interfaces" -I"C:/Embedded_Projects/STM_Workspaces/Objective_C_Projects/STM32F407xx_HAL_In_Objective_C/STM32F407xx_GPIO_Driver_In_Objective_C/drivers_stm32f407/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Src

clean-Src:
	-$(RM) ./Src/STM32F407xx_GPIO_Driver.cyclo ./Src/STM32F407xx_GPIO_Driver.d ./Src/STM32F407xx_GPIO_Driver.o ./Src/STM32F407xx_GPIO_Driver.su ./Src/main.cyclo ./Src/main.d ./Src/main.o ./Src/main.su ./Src/syscalls.cyclo ./Src/syscalls.d ./Src/syscalls.o ./Src/syscalls.su ./Src/sysmem.cyclo ./Src/sysmem.d ./Src/sysmem.o ./Src/sysmem.su

.PHONY: clean-Src

