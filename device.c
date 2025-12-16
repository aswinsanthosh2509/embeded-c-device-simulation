#include <stdio.h>
#include "device.h"
#include"delay.h"

void handleDeviceState(DeviceState state)
{
    switch(state)
    {
        case LED_ON:
            printf("LED is turned ON.\n");
            break;
        case LED_OFF:
            printf("LED is turned OFF.\n");
            break;
        case FAN_LOW:
            printf("FAN is set to LOW speed.\n");
            break;
        case FAN_MEDIUM:
            printf("FAN is set to MEDIUM speed.\n");
            break;
        case FAN_HIGH:
            printf("FAN is set to HIGH speed.\n");
            break;
        case TEMPERATURE_MONITOR:
            printf("Monitoring temperature...\n");
            break;
        default:
            printf("Device is in IDLE state.\n");
    }
    delay_ms(1000);
}