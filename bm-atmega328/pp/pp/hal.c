/*
 * hal.c
 *
 * Created: 10/08/2022 21:04:38
 *  Author: alunopuc
 */ 

#include <avr/io.h>
#define F_CPU 16000000
#include <util/delay.h>
#include "../../../common/hal.h"

void initHal() {
	DDRB = (1<<5); // led1 saída (B5)
}

void led1(boolean s) {
	if(s) {
		PORTB = (1<<5);
	} else {
		PORTB = (0<<5);
	}
}

void pause1s() {
	_delay_ms(1000);
}