/*
  Melody

  Plays a melody

  circuit:
  - 8 ohm speaker on digital pin 8

  created 21 Jan 2010
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/toneMelody
*/

#include "pitches.h"
byte btn;

// notes in the melody:
int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};

int melody2[] = {
  NOTE_E6, NOTE_DS6, NOTE_E6, NOTE_DS6, NOTE_E6, NOTE_B5, NOTE_D6, 
  NOTE_C6, NOTE_A5, 0, NOTE_C5, NOTE_E6,  NOTE_A6, NOTE_B6, 
  0,NOTE_E5, NOTE_GS5, NOTE_B5, NOTE_C6,0,
  NOTE_E6, NOTE_DS6, NOTE_E6, NOTE_DS6, NOTE_E6, NOTE_B5, NOTE_D6, 
  NOTE_C6, NOTE_A5, 0, NOTE_C5, NOTE_E6,  NOTE_A6, NOTE_B6, 
  0,NOTE_E5, NOTE_C6, NOTE_B5, NOTE_A5
};
int noteDurations2[] = {
  8, 8, 8, 8, 8, 8, 8,
  8, 8, 4, 8, 8, 8, 8,
  4, 8, 8, 8, 8, 4,
  8, 8, 8, 8, 8, 8, 8,
  8, 8, 4, 8, 8, 8, 8,
  4, 8, 8, 8, 4
};

void setup() {
  // iterate over the notes of the melody:
   
}

void loop() {
  // no need to repeat the melody.
  if (btn == HIGH){
   for (int thisNote = 0; thisNote < 8; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(8);
  }
  }
  else{
    for (int thisNote = 0; thisNote < 39; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration2 = 1000 / noteDurations2[thisNote];
    tone(8, melody2[thisNote], noteDuration2);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration2 * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(8);
  }
  }
 
}

/////////////
byte btn;
#include "pitches.h"

// notes in the melody:
int melody[] = {

  NOTE_A5, NOTE_A5,NOTE_A5, NOTE_A5, NOTE_B5, NOTE_C6, NOTE_B5, NOTE_B5,NOTE_E5,NOTE_B5,0,
  NOTE_A5,NOTE_B5,NOTE_C6,NOTE_E5,NOTE_A5,NOTE_C6,NOTE_E6,NOTE_D6,NOTE_D6,0,
  NOTE_B5,NOTE_A5,NOTE_B5,NOTE_D5,NOTE_B5,NOTE_D6,NOTE_D6,NOTE_C6,NOTE_C6,0,
  NOTE_A5,NOTE_B5,NOTE_C6,NOTE_F5,NOTE_E5,NOTE_F5,NOTE_G5,NOTE_D6,NOTE_C5,0,
  NOTE_A5,NOTE_A5,NOTE_A5,NOTE_A5,NOTE_B5,NOTE_C6,NOTE_B5,NOTE_E5,NOTE_D6,NOTE_C6,NOTE_B5,0
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {

  8, 16, 6, 8, 8, 8, 6,16,8,4,8,
  8,16,4,8,8,8,4,8,4,8,
  8,16,6,8,8,8,4,8,4,8,
  8,16,6,8,8,8,4,8,4,8,
  8,16,6,8,8,8,4,8,8,8,8,8
};

void setup() {

  pinMode(btn, INPUT_PULLUP);
}

void loop() {
if(btn==LOW){
   for (int thisNote = 0; thisNote < 54; thisNote++) {

    int noteDuration = 1000 / noteDurations[thisNote];

    tone(8, melody[thisNote], noteDuration);

   

    int pauseBetweenNotes = noteDuration * 2.0;

    delay(pauseBetweenNotes);

    

    noTone(8);

  }
  }
  else
  {
  int melody[] = {0};
  }
  // no need to repeat the melody.
}
