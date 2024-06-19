#include <DmxSimple.h>

void setup() {
  pinMode(A5,INPUT);
  pinMode(A4,INPUT);
  DmxSimple.usePin(10);
}


void loop() {
  //potentiometer reading and correcting
  int val1 = map(analogRead(A4),0,1023,255,-1);
  int bright = constrain(val1,0,255);
  
  int val2 = map(analogRead(A5),0,1023,255,-1);
  int temp = constrain(val2,0,255);

  int tempy = constrain((temp-133)*2,0,255); //yellow temp (number 133 to eliminate flickering when transitioning form yellow to blue)
  int tempb = constrain((122-temp)*2,0,255); //blue temp (same here with the number 122) 

  
  for (int i = 0; i<6; i++) {
    //Dimmer
    DmxSimple.write(1+5*i,bright);
    //Red and green
    DmxSimple.write(2+5*i,tempy);
    DmxSimple.write(3+5*i,tempy);
    //Blue
    DmxSimple.write(4+5*i,tempb);

    //White
    DmxSimple.write(5+5*i,255);
  }

  //Black out rest of the channels
  for (int i = 31; i<256; i++)
  {
    DmxSimple.write(i,0);
  }
}
