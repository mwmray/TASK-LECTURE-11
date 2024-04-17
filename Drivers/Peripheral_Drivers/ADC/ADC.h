#include <stdint.h>
#include "stm32f1xx_hal.h"
#include "stm32f1xx_hal_adc.h"

typedef enum {
	ADC_MODE1 = 0b000,
	ADC_MODE2 = 0b001,
	ADC_MODE3 = 0b010,
	ADC_MODE4 = 0b011,
	ADC_MODE5 = 0b100,
	ADC_MODE6 = 0b101,
	ADC_MODE7 = 0b110,
	ADC_MODE8 = 0b111,
} SampleTime_t;

typedef enum {
	ADC_Channel10 = 0b00000001,
	ADC_Channel11 = 0b00000010,
	ADC_Channel12 = 0b00000100,
	ADC_Channel13 = 0b00001000,
	ADC_Channel14 = 0b00010000,
	ADC_Channel15 = 0b00100000,
	ADC_Channel16 = 0b01000000,
	ADC_Channel17 = 0b10000000,
} ADC_Channel_t;

void ADC_Configure_SampleTime(uint8_t ADC_Channel, uint8_t SampleTime);

uint16_t Get_ADC_Data();

uint8_t Is_CTS_High();
