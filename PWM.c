#include "PWM.h"

void _16_bit_tiemr1_config(int frequency){

		//cs12 is prescaler of 254
    //wgm12 is CTC mode
	 TCCR1B |= (1ul<<(CS12)) | (1ul<<(WGM12));
   //overfolw interrupt enable
	 TIMSK1 |= (1ul<<(OCIE1A));
	 //OCRnA=F_CPU/((frequency*2*N)-1)
	 OCR1A = (int)frequency;
	 //here we set the frequency by changing the value of N
}

//ISRTIMER1_COMPA_vect){}
