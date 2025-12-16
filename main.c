#include <stdio.h>
#include"device.h"
int main()
{
    int choice;
    DeviceState currentState = DEVICE_IDLE;
    while(1)
    {
        printf("\n---Embeded Device Simulation---\n");
        printf("1. LED ON\n");
        printf("2. LED OFF\n");
        printf("3. FAN LOW\n");
        printf("4. FAN MEDIUM\n");
        printf("5. FAN HIGH\n");
        printf("6. TEMPERATURE MONITOR\n");
        printf("7. EXIT\n");
        printf("ENTER YOUR CHOICE : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                currentState = LED_ON;
                break;
            case 2:
                currentState = LED_OFF;
                break;
            case 3:
                currentState = FAN_LOW;
                break;
            case 4:
                currentState = FAN_MEDIUM;
                break;
            case 5:
                currentState = FAN_HIGH;
                break;
            case 6:
                currentState = TEMPERATURE_MONITOR;
                break;
            case 7:
                return 0;
            default:
                currentState = DEVICE_IDLE;
        }
        handleDeviceState(currentState);
    }
}