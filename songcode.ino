/* 
  Safe and Sound - Capital City                                    
                                              
  EPICS Group 4, 2023
  Max, Shawn, Anthony, & Carlos
*/
//Tone Library
#include <Tone.h>

Tone tone1;
Tone tone2;
Tone tone3;

#define C1  33
#define D1  37
#define E1  41
#define F1  44
#define G1  49
#define A1  55
#define B1  62
#define C2  65
#define D2  73
#define E2  82
#define F2  87
#define G2  98
#define A2  110
#define B2  123
#define C3  131
#define D3  147
#define E3  165
#define F3  175
#define G3  196
#define A3  220
#define B3  247
#define C4  262
#define d4  294
#define E4  330
#define F4  349
#define G4  392
#define A4  440
#define B4  494
#define C5  523
#define D5  587
#define E5  659
#define F5  698
#define G5  784
#define A5  880
#define B5  988
#define C6  1047
#define REST 0

// this alters the speed of the array 
//this variable is connected to the void setup if-then statements

int tempo = 118;

// indicates buzzer pin

int trumpetMelodybuzzer = 13;
int cordsBassbuzzer = 12;

// notes’ pitch, duration of note
// 1 means whole note, 4 a quarter note, 8 an eighteenth note, 16 sixteenth note
// IMPORTANT NOTICE: negative numbers in the array refer to dotted notes
// Example: -4 means a dotted quarter note, or -8 dotted eighteenth note

int WHOLE_NOTE = 1;
int HALF_NOTE = 2;
int QUARTER_NOTE = 4;
int EIGHTH_NOTE = 8;
int SIXTEENTH_NOTE = 16;

int trumpetMelody[] = {
  // Safe and Sound   
  C4, 8, C4, 8, C4, 8, REST, 8, 
  E4, 8, E4, 8, REST, 2, REST, 4,
  G4, 8, G4, 8, G4, 8, E4, 8, 
  E4, 8, d4, 8, d4, 8, C4, 8, 
  C4, 8, G4, 8, G4, 8, E4, 8, 
  E4, 8, d4, 8, d4, 8, E4, 8, 
  F4, 8, E4, 8, REST, 4, 
  //loop this part to fill melody
  C4, 8, C4, 8, C4, 8, REST, 8, 
  E4, 8, E4, 8, REST, 2, REST, 4,
  G4, 8, G4, 8, G4, 8, E4, 8, 
  E4, 8, d4, 8, d4, 8, C4, 8, 
  C4, 8, G4, 8, G4, 8, E4, 8, 
  E4, 8, d4, 8, d4, 8, E4, 8, 
  F4, 8, E4, 8,
  //trumpet enters
  E4, 4, A3, 4, B3, 8, C4, 8, 
  d4, 8, E4, 4, G3, 8, REST, 8, G3, 8, B3, 8, C4, 8, d4, 8, 
  REST, 8, E4, 4, A3, 4, B3, 8, C4, 8, 
  d4, 8, E4, 4, G3, 8, REST, 8, G3, 8,
  G4, 8, F4, 8, E4, 8, REST, 4, REST, 8,
  // Safe and Sound   
  C4, 8, C4, 8, C4, 8, REST, 8, 
  E4, 8, E4, 8, REST, 2, REST, 4,
  G4, 8, G4, 8, G4, 8, E4, 8, 
  E4, 8, d4, 8, d4, 8, C4, 8, 
  C4, 8, G4, 8, G4, 8, E4, 8, 
  E4, 8, d4, 8, d4, 8, E4, 8, 
  F4, 8, E4, 8, REST, 4, 
  //loop this part to fill melody
  C4, 8, C4, 8, C4, 8, REST, 8, 
  E4, 8, E4, 8, REST, 2, REST, 4,
  G4, 8, G4, 8, G4, 8, E4, 8, 
  E4, 8, d4, 8, d4, 8, C4, 8, 
  C4, 8, G4, 8, G4, 8, E4, 8, 
  E4, 8, d4, 8, d4, 8, E4, 8, 
  F4, 8, E4, 8, 
  //trumpet enters
  E4, 4, A3, 4, B3, 8, C4, 8, 
  d4, 8, E4, 4, G3, 8, REST, 8, G3, 8, B3, 8, C4, 8, d4, 8, 
  REST, 8, E4, 4, A3, 4, B3, 8, C4, 8, 
  d4, 8, E4, 4, G3, 8, REST, 8, G3, 8,
  G4, 8, F4, 8, E4, 8, REST, 4, 

};


int trumpet_melody[] = {


  REST, 16, E4, 4, A3, 4, B3, 8, C4, 8, 
  d4, 8, E4, 4, G3, 8, REST, 8, G3, 8, B3, 8, C4, 8, d4, 8, 
  REST, 8, E4, 4, A3, 4, B3, 8, C4, 8, 
  d4, 8, E4, 4, G3, 8, REST, 8, G3, 8,
  G4, 8, F4, 8, E4, 8,



};

int cords_melody[] = {

  E4, 4, A3, 4, B3, 8, C4, 8, 
  d4, 8, E4, 4, G3, 8, REST, 8, G3, 8, B3, 8, C4, 8, d4, 8, 
  REST, 8, E4, 4, A3, 4, B3, 8, C4, 8, 
  d4, 8, E4, 4, G3, 8, REST, 8, G3, 8,
  G4, 8, F4, 8, E4, 8, REST, 4, 


};

int bass_melody[] = {

  F2, 8, A2, 8, F2, 8, A2, 8,
  F2, 8, A2, 8, F2, 8, A2, 8,
  C2, 8, E2, 8, C2, 8, E2, 8,
  C2, 8, E2, 8, C2, 8, E2, 8,
  A1, 8, C2, 8, A1, 8, C2, 8,
  A1, 8, C2, 8, A1, 8, C2, 8,
  G1, 8, B1, 8, G1, 8, B1, 8,
  G1, 8, B1, 8, G1, 8, B1, 8,
   
};

int melody[] = {
//melody notes
  C4, 8, C4, 8, C4, 8, REST, 8, 
  E4, 8, E4, 8, REST, 2, REST, 4,
  G4, 8, G4, 8, G4, 8, E4, 8, 
  E4, 8, d4, 8, d4, 8, C4, 8, 
  C4, 8, G4, 8, G4, 8, E4, 8, 
  E4, 8, d4, 8, d4, 8, E4, 8, 
  F4, 8, E4, 8, REST, 4, 
  //loop this part to fill melody
  C4, 8, C4, 8, C4, 8, REST, 8, 
  E4, 8, E4, 8, REST, 2, REST, 4,
  G4, 8, G4, 8, G4, 8, E4, 8, 
  E4, 8, d4, 8, d4, 8, C4, 8, 
  C4, 8, G4, 8, G4, 8, E4, 8, 
  E4, 8, d4, 8, d4, 8, E4, 8, 
  F4, 8, E4, 8, REST, 4, 
  //trumpet enters

};

// sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
// there are two values per note (pitch and duration), so for each note there are four bytes
int notes = sizeof(trumpetMelody) / sizeof(trumpetMelody[0]) / 2;

// this calculates the duration of a whole note in ms (60s/tempo)*4 beats
int wholenote = (60000 * 4) / tempo;

int divider = 0, noteDuration = 0;

void setup() {
  tone1.begin(trumpetMelodybuzzer);
  tone2.begin(cordsBassbuzzer);
 
  // iterate over the notes of the melody. 
  // Remember, the array is twice the number of notes (notes + durations)
  for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {

    divider = bass_melody[thisNote + 1];
    divider = trumpetMelody[thisNote + 1];
    divider = cords_melody[thisNote + 1];
    if (divider > 0) {
      // regular note, just proceed
      noteDuration = (wholenote) / divider;
    } else if (divider < 0) {
      // dotted notes are represented with negative durations!!
      noteDuration = (wholenote) / abs(divider);
      noteDuration *= 1.5; // increases the duration in half for dotted notes
    }

    // Plays notes for 90% of the duration, and gives 10% leeway (this resolves the resonance of the piazza buzzer
    tone1.play(trumpetMelody[thisNote]);
	  tone2.play(bass_melody[thisNote]);
    // Wait for the specify the duration of the note before playing the next note.
    delay(noteDuration);
    
    // stop the waveform generation before the next note.
    noTone(trumpetMelodybuzzer);
    noTone(cordsBassbuzzer);
  }
}

void loop() {
  // put function below to repeat it
}
