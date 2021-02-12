#include "mbed.h"
#include <cstdio>



// main() runs in its own thread in the OS
int main()
{
    DigitalOut servo(PA_10);
    int degree = 90;
    int onTime = (2000*degree/180) + 500;
    int offTime = 20000-onTime;

    
    while (true) {
        servo = 1;
        wait_us(onTime);
        servo = 0;
        wait_us(offTime);
    }

    return 0;
}
  
