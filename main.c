#include <msp430.h>
#include "Robot_lab.h"
/*
 * main.c
 */
int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
    initClocksPins();
    while(1){
    	moveForward();
    	turnRight();
    	turnLeft();
    	turnRightWide();
    	turnLeftWide();
    	moveBackwards();

    	__delay_cycles(10000000);


    }

    }











