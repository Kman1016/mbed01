#include "mbed.h"

DigitalOut myled1(LED1);
DigitalOut myled3(LED3);

int main()
{
    while (1)
    {
        for (int i = 0; i < 2; i++) {
            myled1.write(1);
            ThisThread::sleep_for(100ms);
            myled1.write(0);
            ThisThread::sleep_for(100ms);
        }
        ThisThread::sleep_for(1s);
        for (int i = 0; i < 3; i++) {
            myled3 = 1;
            ThisThread::sleep_for(100ms);
            myled3 = 0;
            ThisThread::sleep_for(100ms);
        }
        ThisThread::sleep_for(1s);
    }
}