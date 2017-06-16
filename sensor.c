/*
 *Jace Pounds
 *Prject #6
 *Sensor
 *06/16/2017 
*/
#include "simpletools.h"   
const int TRIGGER_PIN = 0;
const int ECHO_PIN = 1;
                   

int main()                                   
{
  long duration;
  long distance;
  
  low(TRIGGER_PIN) ;
  low(ECHO_PIN);
  pause(250);
 


 
  while(1)
  {
    pulse_out(TRIGGER_PIN, 10);
    duration = pulse_in(ECHO_PIN, 1);
    print("%c %c", HOME , CLREOL);
    distance = duration / 148;
    print("Distance = %d inches\n" , distance);
    
    if (distance < 9)
    {
    print("HOLD UP. \n EVER HEARD OF PERSONAL SPACE? %c %c CLREOL");
    
      high(15);
    }
    if (distance > 9)
    {
      low(15);
      print("Yeah you better back up.%c %c CLREOL");
      pause(500);
     
      
    }                
    
    pause(250);
    
  }  
}
