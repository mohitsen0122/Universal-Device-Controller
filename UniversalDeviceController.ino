int LED_1 = D0;
int LED_2 = D1;
int LED_3 = D2;
int value_red = 0;
int value_green = 0;
int value_blue = 0;
int val_red = D6;
int val_green = D7;
int val_blue = D8;

void deviceInit()
{
  Serial.begin(9600);

  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
}

void turnOffAllDevices()
{
  /* Turning Off All The Devices */
  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, HIGH);
}

void turnOnRedLight()
{
  digitalWrite(LED_1,LOW);
}
void turnOffRedLight()
{
  digitalWrite(LED_1,HIGH);
}
void turnOnGreenLight()
{
  digitalWrite(LED_2,LOW);
}
void turnOffGreenLight()
{
  digitalWrite(LED_2,HIGH);
}
void turnOnBlueLight()
{
  digitalWrite(LED_3,LOW);
}
void turnOffBlueLight()
{
  digitalWrite(LED_3,HIGH);
}

bool isRedSensorOn()
{
  return digitalRead(val_red);
}
bool isGreenSensorOn()
{
  return digitalRead(val_green);
}
bool isBlueSensorOn()
{
  return digitalRead(val_blue);
}
