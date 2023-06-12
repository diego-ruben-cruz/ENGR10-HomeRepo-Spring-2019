#include "main.h"
void RedBeaconPress(void)
{
    int x = 1;
    x = GetDigitalInput(2);
    while (state == 2)
    {
        // x = GetDigitalInput ( 1 ) ;
        PrintToScreen("%d\n", x);
        SetMotor(3, 0);
        Wait(200);
        SetMotor(3, 75);
        Wait(200);
        SetMotor(3, -50);
        Wait(200);
        Stop();
        Read_PD();
        PrintToScreen("%d\n", PD_sum);
        if (PD_sum < stop_level)
        {
            state = state + 1;
            Stop();
            Wait(500);
        }
    }
    SetMotor(2, -75);
    SetMotor(9, 75);
    Wait(750);
    SetMotor(2, 0);
    SetMotor(9, 0);
}