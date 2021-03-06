/*
 * globals.h
 *
 *  Created on: 11 May 2018
 *      Author: 18321933
 */

#ifndef GLOBALS_H_
#define GLOBALS_H_

#include "stdbool.h"
#include "time.h"

//Volatile keyword because the variable is changed from interrupt handler
//Flags
volatile bool uartRxFlag;
volatile bool adcFlag;
volatile bool flowHighFlag;
volatile bool firstHighFlag;
volatile bool rtcSecFlag;
volatile bool i2cTxFlag;
volatile bool vrmsSmallFlag;
volatile bool LoggerFlag;
//volatile bool i2cErFlag;

//extern volatile bool ms3Flag;

extern volatile HAL_StatusTypeDef halStatus;
extern RTC_HandleTypeDef hrtc;
volatile time_t tNow;
volatile time_t onEpoch[3];
volatile time_t offEpoch[3];

//Variables
volatile int16_t tempSetpoint;

//-------------------------Control States--------------------//
volatile int16_t valveState;
volatile int16_t heaterState;
volatile int16_t scheduleState;
volatile int16_t logState;
volatile int16_t logCnt;
//-------------------------

uint8_t in; //7-segments
uint8_t segementsSet[4]; //7 segments

volatile uint8_t timeL; //time RTC

int i, j;

uint8_t charsL;

//volatile uint16_t vMax;
//volatile uint16_t vMin;


#endif /* GLOBALS_H_ */
