/*
 * blink.c
 *
 * Created: 12/9/2024 11:02:04 AM
 * Author : ALVIS
 */ 

#include <avr/io.h>
//#define F_CPU	8000000UL
#include <util/delay.h>

//#include "setup.h"
#include "setup.h"

//#define  LED_PIN	7
//#define	 DDB7		7

#define  input		0
#define	 output		1

#define  LOW		0
#define	 HIGH		1

/*
enum DIRECTION {
	_INPUT = 0,
	_OUTPUT
};
*/

int main(void)
{
	/*
	DDRB |= (1 << DDB7);//DDRB = 0xFF;
	PORTB &= ~(1 << DDB7);	//0x00;
	*/
    /* Replace with your application code */
	pinMode(PB,1, output);
	pinMode(PA,5,output);
	pinMode(PC,6,input);

    while (1)
    {
		
		
	uint8_t BS =digitalRead(PC,6);
		/*
		PORTB |= (1 << DDB7); //PORTB = 0xFF;
		_delay_ms(500);
		PORTB &= ~(1 << DDB7);//PORTB = 0x00;
		_delay_ms(500);
		*/
			if(BS){
				digitalWrite(PB,1, LOW);
				digitalWrite(PA,5,HIGH);
			}else{
				digitalWrite(PB,1, HIGH);
				digitalWrite(PA,5,LOW);
			_delay_ms(500);
			}
    }
}


