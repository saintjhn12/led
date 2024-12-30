/*
 * set.h
 *
 * Created: 12/9/2024 1:47:47 PM
 *  Author: ALVIS
 */ 
#include <avr/io.h>
#include <stddef.h> 

#ifndef SET_H_
#define SET_H_
//PORT DEFINITION
#define PA 0
#define PB 1
#define PC 2
#define PD 3
//PIN DEFINITION
#define  input		0
#define	 output		1
//STATE DEFINITION
#define  LOW		0
#define	 HIGH		1

//FINCTION CALL
void pinMode(uint8_t port, uint8_t pin, uint8_t dirr);
void digitalWrite(uint8_t port, uint8_t pin, uint8_t state);
uint8_t digitalRead(uint8_t port, uint8_t pin);
#endif // SETUP_H

