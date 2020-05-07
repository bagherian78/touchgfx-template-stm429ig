################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/generated/images/src/__designer/Blue_Clocks_Backgrounds_clock_standard_background.cpp \
../TouchGFX/generated/images/src/__designer/Blue_Clocks_Hands_clock_standard_hour_hand.cpp \
../TouchGFX/generated/images/src/__designer/Blue_Clocks_Hands_clock_standard_minute_hand.cpp \
../TouchGFX/generated/images/src/__designer/Blue_Clocks_Hands_clock_standard_second_hand.cpp 

OBJS += \
./TouchGFX/generated/images/src/__designer/Blue_Clocks_Backgrounds_clock_standard_background.o \
./TouchGFX/generated/images/src/__designer/Blue_Clocks_Hands_clock_standard_hour_hand.o \
./TouchGFX/generated/images/src/__designer/Blue_Clocks_Hands_clock_standard_minute_hand.o \
./TouchGFX/generated/images/src/__designer/Blue_Clocks_Hands_clock_standard_second_hand.o 

CPP_DEPS += \
./TouchGFX/generated/images/src/__designer/Blue_Clocks_Backgrounds_clock_standard_background.d \
./TouchGFX/generated/images/src/__designer/Blue_Clocks_Hands_clock_standard_hour_hand.d \
./TouchGFX/generated/images/src/__designer/Blue_Clocks_Hands_clock_standard_minute_hand.d \
./TouchGFX/generated/images/src/__designer/Blue_Clocks_Hands_clock_standard_second_hand.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/generated/images/src/__designer/Blue_Clocks_Backgrounds_clock_standard_background.o: ../TouchGFX/generated/images/src/__designer/Blue_Clocks_Backgrounds_clock_standard_background.cpp
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F429xx -c -I../FATFS/App -I../TouchGFX/target/generated -I../Drivers/CMSIS/Include -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Core/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../FATFS/Target -I../TouchGFX/App -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../TouchGFX/target -I../Middlewares/Third_Party/FatFs/src -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-threadsafe-statics -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"TouchGFX/generated/images/src/__designer/Blue_Clocks_Backgrounds_clock_standard_background.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
TouchGFX/generated/images/src/__designer/Blue_Clocks_Hands_clock_standard_hour_hand.o: ../TouchGFX/generated/images/src/__designer/Blue_Clocks_Hands_clock_standard_hour_hand.cpp
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F429xx -c -I../FATFS/App -I../TouchGFX/target/generated -I../Drivers/CMSIS/Include -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Core/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../FATFS/Target -I../TouchGFX/App -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../TouchGFX/target -I../Middlewares/Third_Party/FatFs/src -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-threadsafe-statics -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"TouchGFX/generated/images/src/__designer/Blue_Clocks_Hands_clock_standard_hour_hand.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
TouchGFX/generated/images/src/__designer/Blue_Clocks_Hands_clock_standard_minute_hand.o: ../TouchGFX/generated/images/src/__designer/Blue_Clocks_Hands_clock_standard_minute_hand.cpp
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F429xx -c -I../FATFS/App -I../TouchGFX/target/generated -I../Drivers/CMSIS/Include -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Core/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../FATFS/Target -I../TouchGFX/App -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../TouchGFX/target -I../Middlewares/Third_Party/FatFs/src -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-threadsafe-statics -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"TouchGFX/generated/images/src/__designer/Blue_Clocks_Hands_clock_standard_minute_hand.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
TouchGFX/generated/images/src/__designer/Blue_Clocks_Hands_clock_standard_second_hand.o: ../TouchGFX/generated/images/src/__designer/Blue_Clocks_Hands_clock_standard_second_hand.cpp
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F429xx -c -I../FATFS/App -I../TouchGFX/target/generated -I../Drivers/CMSIS/Include -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Core/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../FATFS/Target -I../TouchGFX/App -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../TouchGFX/target -I../Middlewares/Third_Party/FatFs/src -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-threadsafe-statics -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"TouchGFX/generated/images/src/__designer/Blue_Clocks_Hands_clock_standard_second_hand.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

