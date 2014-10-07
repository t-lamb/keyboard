int notes [] = {
  //frequencies for middle D,E,F#,G,A,B,C,D
  294, 330, 370, 392, 440, 494, 523, 587  
}; 

void setup() {
  Serial.begin(9600); 
}

void loop(){
  //set local variable to hold value from A0
  int keyVal = analogRead(A0);
  //print keyVal. Will change as buttons are pressed
  Serial.println(keyVal);

  if (keyVal == 1023){ //value when no buttons pressed
    noTone(8); 
  }
  else if(keyVal >= 1000 && keyVal <= 1015){
    tone(8, notes[0]); 
  }
  else if(keyVal >= 505 && keyVal <= 515){
    tone(8, notes[1]); 
  }
  else if(keyVal >= 18 && keyVal <= 25){
    tone(8, notes[2]); 
  }
  else if(keyVal >= 320 && keyVal<= 330){
    tone(8, notes[3]);
  }
  else if(keyVal >= 50 && keyVal <= 60){
    tone(8, notes[4]);
  }
  else if(keyVal >= 88 && keyVal <= 95){
    tone(8, notes[5]);
  }
  else if(keyVal >= 12 && keyVal <= 17){
    tone(8, notes[6]);
  }
  else{
    tone(8, notes[7]); 
  }
}
