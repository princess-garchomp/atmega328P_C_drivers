#include "PWM.h"



void _16_bit_tiemr1_config(){

		//no prescaler
    //wgm12 is CTC mode
	 TCCR1B |= (1ul<<(CS10)) | (1ul<<(WGM12));
   //overfolw interrupt enable
	 TIMSK1 |= (1ul<<(OCIE1A)|(1ul<<OCIE1B));
	 //OCRnA=F_CPU/((frequency*2*N)-1)
	 OCR1A = 800;
	OCR1B = 100;
	 //here we set the frequency by changing the value of N
}

//ISRTIMER1_COMPA_vect){on led;}

//ISR(TIMER1_COMPB_vect){led off;}
