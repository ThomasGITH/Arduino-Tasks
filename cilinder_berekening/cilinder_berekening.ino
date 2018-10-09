float pi = 3.14;
float diameter;
float height;

void setup()                    
{
  Serial.begin(9600);   
}

float calculateVolume(float height, float diameter)
{
  float volume = pi * (diameter / 2) * (diameter / 2) * height;
  return volume;
}

void loop()
{
   Serial.println("Input Height");
   do{
      while(Serial.available() == false)
      {}
      //test of digits, ja towijzen hright nee vraag nieuwe input
       height = Serial.parseInt();
   }
   while(!float(height));
          
  Serial.print("Input Diameter ");
  do{
      while(Serial.available() == 0 && !isDigit(Serial.available()))
      {}
      diameter = Serial.parseInt();
  }
  while(!float(diameter));
  Serial.println(diameter);
  
  Serial.println("Inhoud van een cilinder ================");
  Serial.print ("hoogte ");
  Serial.print (height);
  Serial.print (" diameter, ");
  Serial.print (diameter);
  Serial.print (" de inhoud is ");
  Serial.print (calculateVolume(height, diameter));
  Serial.println ("cm3");
  delay (1000);
}
