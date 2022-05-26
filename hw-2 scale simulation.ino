#include "pitches.h"
byte btn;
int valkyrieMelody[] = {
  NOTE_A5, NOTE_A5,NOTE_A5, NOTE_A5, NOTE_B5, NOTE_C6, NOTE_B5, NOTE_B5,NOTE_E5,NOTE_B5,0,
  NOTE_A5,NOTE_B5,NOTE_C6,NOTE_E5,NOTE_A5,NOTE_C6,NOTE_E6,NOTE_D6,NOTE_D6,0,
  NOTE_B5,NOTE_A5,NOTE_B5,NOTE_D5,NOTE_B5,NOTE_D6,NOTE_D6,NOTE_C6,NOTE_C6,0,
  NOTE_A5,NOTE_B5,NOTE_C6,NOTE_F5,NOTE_E5,NOTE_F5,NOTE_G5,NOTE_D6,NOTE_C6,0,
  NOTE_A5,NOTE_A5,NOTE_A5,NOTE_A5,NOTE_B5,NOTE_C6,NOTE_B5,NOTE_E5,NOTE_D6,NOTE_C6,NOTE_B5,0
};

int BeethovenMelody[] = {
  NOTE_E6, NOTE_DS6, NOTE_E6, NOTE_DS6, NOTE_E6, NOTE_B5, NOTE_D6, 
  NOTE_C6, NOTE_A5, 0, NOTE_C5, NOTE_E6,  NOTE_A6, NOTE_B6, 
  0,NOTE_E5, NOTE_GS5, NOTE_B5, NOTE_C6,0,
  NOTE_E6, NOTE_DS6, NOTE_E6, NOTE_DS6, NOTE_E6, NOTE_B5, NOTE_D6, 
  NOTE_C6, NOTE_A5, 0, NOTE_C5, NOTE_E6,  NOTE_A6, NOTE_B6, 
  0,NOTE_E5, NOTE_C6, NOTE_B5, NOTE_A5
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  8, 16, 6, 8, 8, 8, 6,16,8,4,8,
  8,16,4,8,8,8,4,8,4,8,
  8,16,6,8,8,8,4,8,4,8,
  8,16,6,8,8,8,4,8,4,8,
  8,16,6,8,8,8,4,8,8,8,8,8
};

int counterDurations[] = {
  8, 8, 8, 8, 8, 8, 8,
  8, 8, 4, 8, 8, 8, 8,
  4, 8, 8, 8, 8, 4,
  8, 8, 8, 8, 8, 8, 8,
  8, 8, 4, 8, 8, 8, 8,
  4, 8, 8, 8, 4
};

void setup()
{
  pinMode (2,INPUT_PULLUP);
}

void loop()
{
  btn = digitalRead(2);
  if (btn ==LOW){
    switchaa(1);
  }
  else switchaa(0);

}
void switchaa(int i){
  if (i==1){
    VK();
  }
  else classic();
}

void VK(){ 
  for (int thisNote=0; thisNote <54; thisNote++) {

     int noteDuration = 1000 / noteDurations [thisNote];
     tone(8, valkyrieMelody [thisNote], noteDuration);

     int pauseBetweenNotes = noteDuration * 2.0;
     delay(pauseBetweenNotes);

     //stop the tone playing
     noTone(8);
    }
}
void classic(){
  for (int thisNote=0; thisNote <39; thisNote++) {

      //to calculate the note duration, take one second. Divided by the note type
      int noteDuration = 1000 / counterDurations [thisNote];
      tone(8, BeethovenMelody [thisNote], noteDuration);

      //to distinguish the notes, set a minimum time between them
      //the note's duration +30% seems to work well
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);

      //stop the tone playing
      noTone(8);
 }
}
