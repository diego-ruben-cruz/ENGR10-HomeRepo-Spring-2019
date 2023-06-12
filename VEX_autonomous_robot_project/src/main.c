#include "main.h"
void main(void)
{ // Motor 2 are left wheels and motor 9 are right wheels.
    // Motor 3 is button arm and Motor 4 is capture arm
    // Port 3 is for input of Front Sensor, Port 4 is for output of Front Sensor
    // Port 5 is for input of Left sensor, Port 6 is output of Left Sensor
    state = 1;
    GoToRedBeacon();
    Stop();
    RedBeaconPress();
    Stop();
    GoToGreenBeacon();
    Stop();
    GreenBeaconPressNCapt();
    Stop();
    Exit();
}