#ifndef __CAN2_H__
#define __CAN2_H__

#include "system.h"


void CAN2_init(void);
void CAN2_send(uint32_t Equipment_ID, int16_t Data0, int16_t Data1, int16_t Data2, int16_t Data3);
bool CAN2_motor_offline_check(void);

#endif 
