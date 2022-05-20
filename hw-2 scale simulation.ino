// C++ code
//
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523

int btnPin[]={
  2,3,4,5,6,7,8,9
};

int tonePin = 10;

void setup()
{
  for (int thisNote = 0; thisNote < 8; thisNote++) {
    pinMode(btnPin[thisNote], INPUT_PULLUP);
  }
}

void loop()
{
  int btnState1 = digitalRead(btnPin[0]);
  int btnState2 = digitalRead(btnPin[1]);
  int btnState3 = digitalRead(btnPin[2]);
  int btnState4 = digitalRead(btnPin[3]);
  int btnState5 = digitalRead(btnPin[4]);
  int btnState6 = digitalRead(btnPin[5]);
  int btnState7 = digitalRead(btnPin[6]);
  int btnState8 = digitalRead(btnPin[7]);
  
  if(!btnState1)tone(tonePin,NOTE_C4);
  else if(!btnState2)tone(tonePin,NOTE_D4);
  else if(!btnState3)tone(tonePin,NOTE_E4);
  else if(!btnState4)tone(tonePin,NOTE_F4);
  else if(!btnState5)tone(tonePin,NOTE_G4);
  else if(!btnState6)tone(tonePin,NOTE_A4);
  else if(!btnState7)tone(tonePin,NOTE_B4);
  else if(!btnState8)tone(tonePin,NOTE_C5);
  else noTone(tonePin);
   
}
