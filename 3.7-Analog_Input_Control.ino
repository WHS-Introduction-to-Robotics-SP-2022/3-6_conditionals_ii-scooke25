int red = 11;
int ValueGreen;
int ValueRed;
const int redPin = 11;
const int bluePin = 9;
const int greenPin = 10;
int ValueBlue;
const int potPin = A0;
void setup()
{
	pinMode(bluePin, OUTPUT);
	pinMode(greenPin, OUTPUT);
	pinMode(redPin, OUTPUT);
}
void loop()
{
  int potPinValue = map(analogRead(potPin), 0, 1024, 0, 255);	
  if (potPinValue <= 42.5) {
	ValueRed = 255;
	ValueGreen = potPinValue * 6;
	ValueBlue = 0;
   } 
   if ((potPinValue > 42.5) && (potPinValue <= 85)) {
	ValueRed = 255 - (potPinValue - 43) * 6;
	ValueGreen = 255;
	ValueBlue = 0;
   }
   if ((potPinValue > 85) && (potPinValue <= 127.5)) {
	ValueRed = 0;
	ValueGreen = 255;
	ValueBlue = (potPinValue - 85) * 6;
   }
   if ((potPinValue > 127.5) && (potPinValue <= 170)) {
		ValueRed = 0;}
}
