#include "ADC.h"

void ADC_Configure_SampleTime(uint8_t ADC_Channel, uint8_t SampleTime) {
	for (uint8_t x = 0; x < 8; x++) {
		if (ADC_Channel & (1 << x)) {
			ADC1->SMPR1 |= (SampleTime << (3 * x));
		}
	}
}

uint16_t Get_ADC_Data() {
	uint16_t data_12 = (ADC1->SMPR1 >> 3) & 0b111111111111;
	return data_12;
}

uint8_t Is_CTS_High() {
	uint32_t USART_SR;
	uint8_t status = USART_SR & (1 << 9);
	return (status>0)?1:0;
}
