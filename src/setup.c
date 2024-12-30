
/*
 * set.c
 *
 * Created: 12/9/2024 12:47:55 PM
 *  Author: ALVIS
 */
#include "setup.h"
void pinMode(uint8_t port, uint8_t pin, uint8_t dir){
	switch(port){
		case 0:
		if(dir==input){
			DDRA &= ~(1 << pin);
		}else if (dir ==output){
			DDRA |= (1 << pin);
		}
		
		break;
		
		case 1:
		if(dir == input){
			DDRB &= ~(1 << pin);
		}else if (dir == output)
		{
			DDRB |= (1<< output);
			
		}
		break;
		case 2:
		if(dir ==  input){
			DDRC &= ~(1<< pin);
		}else if (dir == output){
			DDRC |= (1 << pin);
		}
		break;
		
	case 3:
	if (dir == input){
		DDRD &= ~(1 << pin);
	}else if(dir == output){
		DDRD |= (1 << pin);
	}
	break;
	}
		
}

uint8_t digitalRead(uint8_t port, uint8_t pin) {  
  /* switch(port){
	   case 0:
	  return PINA &( 1 << pin);
		break;
		case 1:
		return PINB & (1 << pin);
		break;
		case 2:
		return PINC & (1<<pin);
		break;
		case 3:
		return PIND &(1<<pin);
		break;
		default:
		return 0;
		
	}
	*/
  if(port==0){
	  return PINA & (1 << pin);
  }else if (port==1)
  {
	  return PINB & (1 << pin);
  }else if (port==2)
  {
	  return PINC & (1 << pin);
  }else if (port==3)
  {
	  return PIND & (1 << pin);
  }else{
  return 0;
  }
   
}  

void digitalWrite(uint8_t port, uint8_t pin, uint8_t state){
	switch(port){
		case 0:
		if (state == output){
			PORTA |= (1<<pin);
		}else if (state == input)
		{
			PORTA &= ~(1<< pin);
		}
		break;
		case 1:
		if(state == output){
			PORTB |= (1<< pin);
		}else if (state == input)
		{
			PORTB &= ~(1<<pin);
		}
		break;
		case  2:
		if (state == output)
		{
			PORTC |= (1<< pin);
		}else if (state == input){
			PORTC &= ~(1<< pin);
		}
		break;
		case 3:
		if(state == output){
			PORTD |=(1 << pin);
		}else if (state == input)
		{
			PORTD &= ~(1 << pin);
		}
		break;
	}
		
	
}