//www.elegoo.com
//2016.12.08

#include "pitches.h"
 
// notes in the melody:
int melody[] = {
  NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6};
int duration = 500;  // 500 miliseconds
 
void setup() {
  pinMode(8,OUTPUT);
 
}
 
void loop() {

    
  for (int thisNote = 0; thisNote < 8; thisNote++) {
    // pin8 output the voice, every scale is 0.5 sencond
    mytone(8, melody[thisNote], duration);
     
    // Output the voice after several minutes
    delay(500);
  }
   
  // restart after two seconds 
  delay(2000);
  /*
  tone(8,NOTE_A5,1000);
  delay(1000);
  mytone(8,NOTE_A5,1000);
  delay(500);
  */
}


/*void loop()
{

  digitalWrite(8,HIGH);
  delay(1000);
  
  //mytone(8,1000,2000);


  
}
*/
void mytone(int pin,int freq,int dur)
{
  long i;
  long a = dur;
  a = a*freq;
  for(i=0;i<a;i+=1000)
  {
  digitalWrite(pin,HIGH);
  delayMicroseconds((500000/freq));
  digitalWrite(pin,LOW);
  delayMicroseconds((500000/freq));
  }

/*digitalWrite(pin,HIGH);
delayMicroseconds(freq/2);
digitalWrite(pin,LOW);
delayMicroseconds(freq/2);
*/
  
}
