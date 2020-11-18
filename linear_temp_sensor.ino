//reference: https://wiki.dfrobot.com/DFRobot_LM35_Linear_Temperature_Sensor__SKU_DFR0023_
//changed Tep in line 14 to Temp
//unable to change code to convert Celsius to Fahrenheit
void setup()
{
    Serial.begin(9600);//Set Baud Rate to 9600 bps
}

void loop()
{
    uint16_t val;
    double dat;
    val=analogRead(A0);//Connect LM35 on Analog 0
    dat = (double) val * (5/10.24);
    Serial.print("Temp:"); //Display the temperature on Serial monitor
    Serial.print(dat);
    Serial.println("C");
    delay(500);
}
