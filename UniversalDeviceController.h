/*
 * Function Name: deviceInit
 * Return:        void
 * Parm:          void
 * Desc:          Does the device initialization
 */
void deviceInit();

/*
 * Function Name: isRedSensorOn
 * Return:        boolean
 * Parm:          void
 * Desc:          Checks the RED sensor value
 *                Returns true if sensor is ON
 *                Returns false if sensor is OFF
 */
bool isRedSensorOn();

/*
 * Function Name: isGreenSensorOn
 * Return:        boolean
 * Parm:          void
 * Desc:          Checks the GREEN sensor value
 *                Returns true if sensor is ON
 *                Returns false if sensor is OFF
 */
bool isGreenSensorOn();

/*
 * Function Name: isBlueSensorOn
 * Return:        boolean
 * Parm:          void
 * Desc:          Checks the BLUE sensor value
 *                Returns true if sensor is ON
 *                Returns false if sensor is OFF
 */
bool isBlueSensorOn();

/*
 * Function Name: turnOnRedLight
 * Return:        void
 * Parm:          void
 * Desc:          Turns on Red Light
 */
void turnOnRedLight();

/*
 * Function Name: turnOffRedLight
 * Return:        boolean
 * Parm:          void
 * Desc:          Turna off Red Light
 */
void turnOffRedLight();

/*
 * Function Name: turnOnGreenLight
 * Return:        boolean
 * Parm:          void
 * Desc:          Turns on Green Light
 */
void turnOnGreenLight();

/*
 * Function Name: turnOffGreenLight
 * Return:        boolean
 * Parm:          void
 * Desc:          Turns Off Green Light
 */
void turnOffGreenLight();

/*
 * Function Name: turnOnBlueLight
 * Return:        boolean
 * Parm:          void
 * Desc:          Turns On Blue Light
 */
void turnOnBlueLight();

/*
 * Function Name: turnOffBlueLight
 * Return:        boolean
 * Parm:          void
 * Desc:          Turns Off Blue Light
 */
void turnOffBlueLight();

/*
 * Function Name: turnOffAllDevices
 * Return:        boolean
 * Parm:          void
 * Desc:          Turns Off All Device
 */
void turnOffAllDevices();
