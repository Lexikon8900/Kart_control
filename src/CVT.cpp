
int correction(int upm){
  
  prop = upm - 1000;
  diff = prop - preerror;
  integral =+ prop;
  int correction = prop*kp + diff*kd + integ*ki;
  preerror = prop;
  return correction;


  }
  