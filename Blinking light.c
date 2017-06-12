/*
 * Jace Pounds
 * Program #2
 * Blink a LED
 * 06/12/17  
*/
#include "simpletools.h"                      // Include simple tools

int main()                                    // Main function
{
  while(1)
  {   
 high(0);
 pause(100);
 low(0);
 pause(100);
 high(7);
 pause(500);
 low(7);
 pause(500);
  }  
}
