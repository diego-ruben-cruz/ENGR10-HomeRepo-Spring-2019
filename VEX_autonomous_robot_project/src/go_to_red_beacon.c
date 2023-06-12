#include "main.h"
void GoToRedBeacon(void)
{
    int x = 0;
    freq = 0;                   // 0=1khz (red), 1=10kHz(green beacon)
    ambient_level = 65;         // used in 'move.' [light intensity]
    slow_level = 5000;          // used in 'move.' [light intensity]
    stop_level = 6000;          // used in 'move.' [light intensity]
    expose_time = 5;            // used in expose_and_read. [milliseconds]
    steer_sensitivity = 25;     // used in 'move.' [RPM]
    forward_speed = 65;         // forward speed, used in 'move.' [RPM]
    slow_speed = 35;            // slow speed, used in 'move.' [RPM]
    spin_speed = 50;            // spin speed (for searching mode), used in 'move.' [RPM]
    SetDigitalOutput(10, freq); // turn to 1kHz (red beacon) [Electromagnetic Freq/¬Hz]
    while (state == 1)
    {
        Read_PD();
        find_max();
        move();
        x = GetDigitalInput(2);
        if (x == 0)
        {
            state = 2;
            SetMotor(2, 0);
            SetMotor(9, 0);
            Wait(250);
        }
    }
}