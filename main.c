#include <msp430.h>
#include "Robot_lab.h"
/*
 * main.c
 */
int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
    P1DIR|= BIT3; // TA0.0
    P1DIR|= BIT4; // TA0.1
    P1DIR|= BIT8; // TA1.0
    P1DIR|= BIT9; // TA1.1

    	P1DIR |= BIT2|BIT0|BIT1|BIT4;                // TA0CCR1 on P1.BITS

        TACTL &= ~MC1|MC0;         // stop timer A0

        TACTL |= TACLR;                // clear timer A0

        TACTL |= TASSEL1;           // configure for SMCLK

        TACCR0 = 100;                // set signal period to 100 clock cycles (~100 microseconds)

        TACCR1 = 25;                // set duty cycle to 25/100 (25%)

        TACCTL1 |= OUTMOD_7;        // set TACCTL1 to Reset / Set mode   5 for 0

        TACTL |= MC0;                // count up

        while (1) {
               __delay_cycles(1000000);
               TACCR1 = 5;            // set duty cycle to 50/100 (50%)

           }




















	return 0;
}
