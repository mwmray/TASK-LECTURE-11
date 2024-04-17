/*
 * TIMx_CR1.c
 *
 *  Created on: Apr 16, 2024
 *      Author: M.W Laptop
 */

#include "TIMx_CR1.h"
#define cleanmask 0xf

void TIM_Configure(Tim_t *timer, TIM_Config_t *config) {

	uint16_t Config_Data;

	switch (config->Clk_Div) {
	case Clk_Div_Tck_Int:
		TIM_CLK_Data = 0b00;
		break;
	case Clk_Div_Tck_2:
		TIM_CLK_Data = 0b01;
		break;
	case Clk_Div_Tck_4:
		TIM_CLK_Data = 0b10;
		break;
	default:
		TIM_CLK_Data = 0b11;
		break;
	}

	switch (config->ARPE) {
	case ARPE_NOT_BUFFERED:
		ARPE_Data = 0b0;
		break;
	case ARPE_BUFFERED:
		ARPE_Data = 0b1;
		break;
	}

	switch (config->CMS) {
	case Edge_Aligned_Mode:
		CMS_Data = 0b00;
		break;
	case Center_Aligned_Mode1:
		CMS_Data = 0b01;
		break;
	case Center_Aligned_Mode2:
		CMS_Data = 0b10;
		break;
	case Center_Aligned_Mode3:
		CMS_Data = 0b11;
		break;
	}

	switch (config->DIR) {
	case DIR_UPCOUNTER:
		DIR_Data = DIR_UPCOUNTER;
		break;
	case DIR_DOWNCOUNTER:
		DIR_Data = DIR_DOWNCOUNTER;
		break;
	}

	switch (config->OPM) {
	case OPM_COUNTER_CONTINUE:
		OPM_Data = OPM_COUNTER_CONTINUE;
		break;
	case OPM_COUNTER_STOP:
		OPM_Data = OPM_COUNTER_STOP;
		break;
	}

	switch (config->URS) {
	case URS_NORMAL_MODE:
		URS_Data = URS_NORMAL_MODE;
		break;
	case URS_SPECIFIED_MODE:
		URS_Data = URS_SPECIFIED_MODE;
		break;
	}

	switch (config->UDIS) {
	case UDIS_UEV_ENABLE:
		UDIS_Data = UDIS_UEV_ENABLE;
		break;
	case UDIS_UEV_DISABLE:
		UDIS_Data = UDIS_UEV_DISABLE;
		break;
	}

	switch (config->CEN) {
	case CEN_DISABLE:
		CEN_Data = CEN_DISABLE;
		break;
	case CEN_ENABLE:
		CEN_Data = CEN_ENABLE;
		break;
	}

	timer->TIM_CR1 &= ~(cleanmask);

	Config_Data = config->CEN | (config->UDIS << 1) | (config->URS << 2)
			| (config->OPM << 3) | (config->DIR << 4) | ((config->CMS) << 5)
			| (config->ARPE << 7) | (config->Clk_Div << 9);

	timer->TIM_CR1 |= Config_Data;

}

