#include <mega64.h>
#include <delay.h>

//macros
#define PORTC_DIRECTION DDRC
#define PORTC_OUTPUT PORTC


//main function
void main(void)
{

    //set PORTC
    PORTC_DIRECTION=0xFF;
    PORTC_OUTPUT=0x00;

    //toggle PORTC
    while (1)
    {
        //delay 1s
        delay_ms(1000);
        
        //toggle PORTC
        PORTC = ~PORTC;
    }
}