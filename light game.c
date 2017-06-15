/*
 *Jace Pounds
 **Project #5
 *Reaction Game using a button and two LED's
 *06/14/17 
*/
#include "simpletools.h"                      

int main()                                   
{
  int TimeCounter ;
  char PlayAgain = 'Y' ;
  int interval ;
  float Scoresum;
  int rounds = 0;
  int best = 1500;
  
  srand(CNT);
  
  print("Game Instructions: \n");
  print("The green LED will turn on when the game starts. \n");
  print("When the blue LED turns on, let go of the button as fast as you can! \n\n");
  

 
  while(PlayAgain == 'Y' || PlayAgain == 'y')
  { 
  print("Press and hold the button to start!");
  
  while (input(0) == 0)
  { 
  //Intentional empty brackets// 
  } 
  
  high(15);
  low(14) ;
  
  interval = (rand() %1001) + 500 ;
  pause(interval); 
  
 low(15);
  high(14);
  
  TimeCounter = 0;
  while (input(0) == 1 )
  
  { 
  pause(1);
  TimeCounter = TimeCounter + 1;
  } 
  low(14) ;
  
  if (TimeCounter > 0 )
  {
    print(" Your time was %d ms.\n", TimeCounter);
    Scoresum = Scoresum + TimeCounter;
    rounds = rounds + 1;
   
    if (TimeCounter < best)
    {
      best = TimeCounter;
    } 
  } 
   else   
  {
    print("You've let go of the button before time. Try ,try , again! \n");
  }
  
  print("Would you like to play again? (Y/N)" );
  scan("%c", &PlayAgain) ;
  //end of while loop for play again
  } 
  Scoresum = Scoresum
   / rounds;
  print( "Farwell my friend! Your Score was: %0.2f ms.\n",Scoresum);
  print( "Your best time was %d ms.\n", best);
   
  return 0;
    
}