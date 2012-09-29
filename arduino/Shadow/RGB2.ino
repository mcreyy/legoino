// Small demonstration of rgb2
// RGB2 is NOT pulseWidth Modulated


int rgb2EventStatus=0;

boolean rgb2Red=HIGH;
boolean rgb2Green=HIGH;
boolean rgb2Blue=HIGH;

void setupEventRgb2() {
  pinMode(RED2, OUTPUT);    
  pinMode(GREEN2, OUTPUT); 
  pinMode(BLUE2, OUTPUT); 
}


void runEventRgb2() {
  rgb2EventStatus++;
  if (rgb2EventStatus%getParameter(PARAM_RGB2)==0) { // random color every 1s
    if (random(2)==1) {
      rgb2Red=HIGH;
    } 
    else {
      rgb2Red=LOW;
    }
    if (random(2)==1) {
      rgb2Green=HIGH;
    } 
    else {
      rgb2Green=LOW;
    }
        if (random(2)==1) {
      rgb2Blue=HIGH;
    } 
    else {
      rgb2Blue=LOW;
    }
  }


  digitalWrite(RED2,rgb2Red);
  digitalWrite(GREEN2,rgb2Green);
  digitalWrite(BLUE2,rgb2Blue);
}











