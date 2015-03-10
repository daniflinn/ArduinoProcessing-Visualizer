int sensorValue; //declares sensorValue as a varriable
int led = 13;    //Pin 13 is an LED, gives pin 13 the name "led"

void setup()

{
  Serial.begin(9600);    //sets the serial port to 9600
  pinMode(led, OUTPUT);  //sets led as an output
}


void loop()

{
  sensorValue = analogRead(A0);          //read analog input pin A0
  Serial.println(sensorValue, DEC);     //prints the value read
  delay(45);                            //wait 75ms for net reading
  
  if (sensorValue > 100)
  {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
  }
}

 
 
