#include "main.h"
void Stop(void)
{
    SetMotor(3, 0);
    SetMotor(2, 0);
    SetMotor(9, 0);
    Wait(500);
}