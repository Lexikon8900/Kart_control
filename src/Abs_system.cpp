#include "cart_header.h"

void Abs_system(){

 #if defined(ABS_ENABLED)
   if(ROTAA < 1){
    realeseBrake();
   }
 #endif
}
   
void realeseBrake(){
  dw(10,HIGH);//code to realese brake
}