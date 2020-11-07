#include "board.h"
#include "dbus.h"
#include "chassis.h"
#include "gimbal.h"
#include "shoot.h"


#include "init.h"
#include "chassis_task.h"
#include "gimbal_task.h"

#include "protocol.h"
#include "referee_system.h"
#include "hero_cmd.h"
#include "shoot_task_large.h"
//Timer necessary
#include "tim.h"
#include "stm32f4xx_hal.h"




void shoot_task_large(void const *argument){
	///System variables
	 uint32_t period = osKernelSysTick();
	
	//PWM Initialize
	HAL_TIM_PWM_Start(&htim4,TIM_CHANNEL_3);
	__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_3,2000);
	osDelayUntil(&period,2000);
	__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_3,1000);
	osDelayUntil(&period,1750);

    while(1){
__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_3,1500);
			
			//Idle time for the system 
			osDelayUntil(&period,5);

    }
}



