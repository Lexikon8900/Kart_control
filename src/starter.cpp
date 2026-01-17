void engine rpm(){
   #if defined(ENGINE_START)
   magnet = analogRead(A0);
   if (pointer === 0){ 
        if(magnet > threshold){
          digitalWrite(zünd_pin,HIGH);
          }else{
          digitalWrite(zünd_pin,LOW);
        }
    }else{
        if(magnet < threshold){
          dw(zünd_pin,HIGH);
          pointer = 0;
        }
    }
    #endif
}
