#include "main.h"
void Exit(void)
{
    int sonicFrontRead;
    StartUltrasonic(3, 4);
    while (state == 5)
    {
        sonicFrontRead = GetUltrasonic(3, 4);
        Wait(250);
        if (sonicFrontRead > 60)
        {
            SetMotor(2, 127);
            SetMotor(9, -127);
            sonicFrontRead = GetUltrasonic(3, 4);
        }
        else
        {
            SetMotor(2, 60);
            SetMotor(9, 60);
            sonicFrontRead = GetUltrasonic(3, 4);
        }
        PrintToScreen("Front: %d\n", sonicFrontRead);
    }
}