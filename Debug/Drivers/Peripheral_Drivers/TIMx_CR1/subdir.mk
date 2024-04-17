################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/Peripheral_Drivers/TIMx_CR1/TIMx_CR1.c 

OBJS += \
./Drivers/Peripheral_Drivers/TIMx_CR1/TIMx_CR1.o 

C_DEPS += \
./Drivers/Peripheral_Drivers/TIMx_CR1/TIMx_CR1.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/Peripheral_Drivers/TIMx_CR1/%.o Drivers/Peripheral_Drivers/TIMx_CR1/%.su Drivers/Peripheral_Drivers/TIMx_CR1/%.cyclo: ../Drivers/Peripheral_Drivers/TIMx_CR1/%.c Drivers/Peripheral_Drivers/TIMx_CR1/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Drivers-2f-Peripheral_Drivers-2f-TIMx_CR1

clean-Drivers-2f-Peripheral_Drivers-2f-TIMx_CR1:
	-$(RM) ./Drivers/Peripheral_Drivers/TIMx_CR1/TIMx_CR1.cyclo ./Drivers/Peripheral_Drivers/TIMx_CR1/TIMx_CR1.d ./Drivers/Peripheral_Drivers/TIMx_CR1/TIMx_CR1.o ./Drivers/Peripheral_Drivers/TIMx_CR1/TIMx_CR1.su

.PHONY: clean-Drivers-2f-Peripheral_Drivers-2f-TIMx_CR1

