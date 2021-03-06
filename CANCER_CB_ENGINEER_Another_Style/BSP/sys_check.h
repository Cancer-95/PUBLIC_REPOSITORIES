#ifndef __SYS_CHECK_H
#define __SYS_CHECK_H

#include "system.h"

typedef __packed struct
{	
	bool     check_enable;
	bool     next_step_enable;
	bool     check_CCTV_enable;
	bool     step_run_once;
	uint8_t  check_step;
	
	bool     motor_serious_stall;
	bool     motor_check_time_record;
	uint32_t motor_check_time;
} check_t;


extern check_t check;

void sys_check_init(void);
void sys_check(void);

#endif


