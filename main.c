#include <msp430.h>
#include "Robot_lab.h"
/*
 * main.c
 */
int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
    P1DIR|= BIT1; // TA0.0
    P1DIR|= BIT2; // TA0.1
    P2DIR|= BIT0; // TA1.0
    P2DIR|= BIT1; // TA1.1


    P1SEL |= BIT1;
    P1SEL |= BIT2;
    P2SEL |= BIT0;
    P2SEL |= BIT1;

    // set up timers
    TA0CTL &= ~ MC1|MC0; // stop timer

    TA0CTL |= TACLR; // clear timer

    TA1CTL &= ~ MC1|MC0; // stop timer

    TA1CTL |= TACLR; // clear timer

    TA1CTL |= TASSEL1; // configure SMCLK

    TA0CCTL1 |= OUTMOD_5; //sets to reset
    TA0CCTL0 |= OUTMOD_7; //sets to reset/reset

    TA1CCTL0 |= OUTMOD_7; //sets to reset
    //TA1CCTL0 |= OUTMOD_5; //sets to reset

    TA0CCR0 = 100; //sets signal period to 100 clock cycles
    TA0CCR1 = 50; // sets duty cycle

    TA1CCR0 = 100; //sets signal period to 100 clock cycles
    TA1CCR1 = 50; // sets duty cycle

    TA0CTL |= MC0; // starts counting up
    TA1CTL |= MC0;
    while(1){




    }

    }



void resetAll()
	{
		TA0CCTL0 &= ~OUTMOD_7;

		TA0CCTL1 &= ~OUTMOD_7;

		TA1CCTL0 &= ~OUTMOD_7;

		TA1CCTL1 &= ~OUTMOD_7;

	}

















