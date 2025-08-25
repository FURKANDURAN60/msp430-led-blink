#include <msp430.h>

void delay_5s()
{
    volatile unsigned int i, j;
    for(i = 0; i < 250; i++)        // 250 × 20000 = ~5 milyon döngü
    {
        for(j = 0; j < 20000; j++);
    }
}

void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // Watchdog Timer kapatılır

    P1DIR |= BIT0;              // P1.0 çıkış

    while(1)
    {
        P1OUT |= BIT0;          // LED yak
        delay_5s();             // 5 saniye bekle

        P1OUT &= ~BIT0;         // LED söndür
        delay_5s();             // 5 saniye bekle
    }
}