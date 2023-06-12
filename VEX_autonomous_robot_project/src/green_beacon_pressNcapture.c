#include "main.h"
void GreenBeaconPressNCapt(void)
{
    int x = 1;
    x = GetDigitalInput(2);
    while (state == 4)
    {
        SetMotor(4, 50);
        Wait(200);
        Stop();
        Wait(250);
        SetMotor(2, -127);
        SetMotor(9, 127);
        Wait(500);
        SetMotor(2, 0);
        SetMotor(9, 0);
        state = state + 1;
    }
}