#ifndef DEVICE_H
#define DEVICE_H
typedef enum {
    DEVICE_IDLE,
    LED_ON,
    LED_OFF,
    FAN_LOW,
    FAN_MEDIUM,
    FAN_HIGH,
    TEMPERATURE_MONITOR
} DeviceState;

void handleDeviceState(DeviceState state);
#endif 