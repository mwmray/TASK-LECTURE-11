#include <stdint.h>

#define TIM2_Base 0x40000000

#define ARPE_NOT_BUFFERED 0
#define ARPE_BUFFERED 1

#define DIR_UPCOUNTER 0
#define DIR_DOWNCOUNTER 1

#define OPM_COUNTER_CONTINUE 0
#define OPM_COUNTER_STOP 1

#define URS_NORMAL_MODE 0
#define URS_SPECIFIED_MODE 1

#define UDIS_UEV_ENABLE 0
#define UDIS_UEV_DISABLE 1

#define CEN_DISABLE 0
#define CEN_ENABLE 1

extern uint8_t TIM_CLK_Data;
extern uint8_t ARPE_Data;
extern uint8_t CMS_Data;
extern uint8_t DIR_Data;
extern uint8_t OPM_Data;
extern uint8_t URS_Data;
extern uint8_t UDIS_Data;
extern uint8_t CEN_Data;

typedef struct {
	volatile uint32_t TIM_CR1;
} Tim_t;

#define TIM2 (Tim_t *) TIM2_Base

typedef enum {
	Clk_Div_Tck_Int = 0b00, Clk_Div_Tck_2 = 0b01, Clk_Div_Tck_4 = 0b10
} TIM_Clk_Div_t;

typedef enum {
	Edge_Aligned_Mode = 0b00,
	Center_Aligned_Mode1 = 0b01,
	Center_Aligned_Mode2 = 0b10,
	Center_Aligned_Mode3 = 0b11
} CMS_t;

typedef struct {
	TIM_Clk_Div_t Clk_Div;
	uint8_t ARPE;
	CMS_t CMS;
	uint8_t DIR;
	uint8_t OPM;
	uint8_t URS;
	uint8_t UDIS;
	uint8_t CEN;
} TIM_Config_t;

void TIM_Configure(Tim_t *timer, TIM_Config_t *config);

