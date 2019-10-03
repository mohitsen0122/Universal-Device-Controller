#include "UserApi.h"

void setup()
{
  deviceInit();
  turnOffAllDevices();
}

void loop()
{
  if(HIGH == isRedSensorOn())
  {
    turnOnRedLight();
  }
  else
  {
    turnOffRedLight();
  }

  if(HIGH == isGreenSensorOn())
  {
    turnOnGreenLight();
  }
  else
  {
    turnOffGreenLight();
  }

  if(HIGH == isBlueSensorOn())
  {
    turnOnBlueLight();
  }
  else
  {
    turnOffBlueLight();
  }
}
