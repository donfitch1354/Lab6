#include <msp430.h>
#include "Robot_lab.h"
/*
 * main.c
 */
int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

    while(1){
    	turnRight();
    	turnLeft();
    	turnRightWide();
    	turnLeftWide();
    	moveForward();
    	moveBackwards();
    	__delay_cycles(1000000);


    }

    }











