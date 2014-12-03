#include "Stopwatch.h"
#include <TM1638.h>

// define a module on data pin 8, clock pin 9 and strobe pin 7
TM1638 module(8,9,7);

Stopwatch s1;
bool flag = 0;
void setup()
{
  /*
  module.setDisplayToString("HELLO");
   delay(1000);
   module.setDisplayToString("BEGIN");
   delay(1000);
   */
   Serial.begin(9600);
}

void loop()
{
  byte keys = module.getButtons(); 


  module.setDisplayToDecNumber(s1.current_time(),0x2,0);
  //Serial.println(s1.current_time());

  //press first key to start new lap
  if(keys & 0x1){
    module.setLEDs(keys & 0b1);
    //shows current lap number on display
    module.setDisplayToDecNumber(s1.lap(),0);
    delay(1000);
    module.setLEDs(0x0);
  }
  //display fastest lap
  if(keys & 0x2){
    module.setLEDs(0x2 << 8);
    int * best_lap = s1.fastestLap();
    Serial.print("Fastest Lap\t");
    Serial.print(*best_lap);
    Serial.print ("\t");
    Serial.print(*(best_lap + 1));
    Serial.println();
    
 //   module.setDisplayToDecNumber(best_lap[1],0x2,0);
    delay(1000);
//    module.setDisplayToDecNumber(best_lap[0]+1000,0);
  
  
    module.setLEDs(0x0);
  }
  
}

