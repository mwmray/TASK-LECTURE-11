################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/Peripheral_Drivers/ADC/ADC.c 

OBJS += \
./Drivers/Peripheral_Drivers/ADC/ADC.o 

C_DEPS += \
./Drivers/Peripheral_Drivers/ADC/ADC.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/Peripheral_Drivers/ADC/%.o Drivers/Peripheral_Drivers/ADC/%.su Drivers/Peripheral_Drivers/ADC/%.cyclo: ../Drivers/Peripheral_Drivers/ADC/%.c Drivers/Peripheral_Drivers/ADC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Drivers-2f-Peripheral_Drivers-2f-ADC

clean-Drivers-2f-Peripheral_Drivers-2f-ADC:
	-$(RM) ./Drivers/Peripheral_Drivers/ADC/ADC.cyclo ./Drivers/Peripheral_Drivers/ADC/ADC.d ./Drivers/Peripheral_Drivers/ADC/ADC.o ./Drivers/Peripheral_Drivers/ADC/ADC.su

.PHONY: clean-Drivers-2f-Peripheral_Drivers-2f-ADC

