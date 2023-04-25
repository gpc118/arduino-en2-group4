/* 
  Safe and Sound - Capital City                                    
                                              
  EPICS Group 4, 2023
  Max, Shawn, Anthony, & Carlos
*/

#define C2  65
#define CS2 69
#define D2  73
#define DS2 78
#define E2  82
#define F2  87
#define FS2 93
#define G2  98
#define GS2 104
#define A2  110
#define AS2 117
#define B2  123
#define C3  131
#define CS3 139
#define D3  147
#define DS3 156
#define E3  165
#define F3  175
#define FS3 185
#define G3  196
#define GS3 208
#define A3  220
#define AS3 233
#define B3  247
#define C4  262
#define CS4 277
#define d4  294
#define DS4 311
#define E4  330
#define F4  349
#define FS4 370
#define G4  392
#define GS4 415
#define A4  440
#define AS4 466
#define B4  494
#define C5  523
#define CS5 554
#define D5  587
#define DS5 622
#define E5  659
#define F5  698
#define FS5 740
#define G5  784
#define GS5 831
#define A5  880
#define AS5 932
#define B5  988
#define C6  1047
#define REST 0

// this alters the speed of the array 
//this variable is connected to the void setup if-then statements

int tempo = 118;


// indicates buzzer pin
int trumpet_buzzer = 13;
int cords_buzzer = 12;
int bass_buzzer = 11;
int melody_buzzer = 10;


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

  F2, 8, A2, 8, 
  E4, 4, A3, 4, B3, 8, C4, 8, 
  d4, 8, E4, 4, G3, 8, REST, 8, G3, 8, B3, 8, C4, 8, d4, 8, 
  REST, 8, E4, 4, A3, 4, B3, 8, C4, 8, 
  d4, 8, E4, 4, G3, 8, REST, 8, G3, 8,
  G4, 8, F4, 8, E4, 8, REST, 4, 
   
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
int notes = sizeof(trumpet_melody) / sizeof(trumpet_melody[0]) / 2;

// this calculates the duration of a whole note in ms (60s/tempo)*4 beats
int wholenote = (60000 * 4) / tempo;

int divider = 0, noteDuration = 0;

void setup() {
  // iterate over the notes of the melody. 
  // Remember, the array is twice the number of notes (notes + durations)
  for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {

    // calculates the duration of each note
    divider = trumpetMelody[thisNote + 1];
    if (divider > 0) {
      // regular note, just proceed
      noteDuration = (wholenote) / divider;
    } else if (divider < 0) {
      // dotted notes are represented with negative durations!!
      noteDuration = (wholenote) / abs(divider);
      noteDuration *= 1.5; // increases the duration in half for dotted notes
    }

    // Plays notes for 90% of the duration, and gives 10% leeway (this resolves the resonance of the piazza buzzer
    tone(trumpet_buzzer, trumpetMelody[thisNote], noteDuration*0.9);

    // Wait for the specify the duration of the note before playing the next note.
    delay(noteDuration);
    
    // stop the waveform generation before the next note.
    noTone(trumpet_buzzer);
  }
//cords part
 // iterate over the notes of the melody. 
  // Remember, the array is twice the number of notes (notes + durations)
  for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {

    // calculates the duration of each note
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
    tone(cords_buzzer, cords_melody[thisNote], noteDuration*0.9);

    // Wait for the specify the duration of the note before playing the next note.
    delay(noteDuration);
    
    // stop the waveform generation before the next note.
    noTone(cords_buzzer);
  }
//bass part
 // iterate over the notes of the melody. 
  // Remember, the array is twice the number of notes (notes + durations)
  for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {

    // calculates the duration of each note
    divider = trumpet_melody[thisNote + 1];
    if (divider > 0) {
      // regular note, just proceed
      noteDuration = (wholenote) / divider;
    } else if (divider < 0) {
      // dotted notes are represented with negative durations!!
      noteDuration = (wholenote) / abs(divider);
      noteDuration *= 1.5; // increases the duration in half for dotted notes
    }

    // Plays notes for 90% of the duration, and gives 10% leeway (this resolves the resonance of the piazza buzzer
    tone(bass_buzzer, bass_melody[thisNote], noteDuration*0.9);

    // Wait for the specify the duration of the note before playing the next note.
    delay(noteDuration);
    
    // stop the waveform generation before the next note.
    noTone(bass_buzzer);
  }
//melody
 // iterate over the notes of the melody. 
  // Remember, the array is twice the number of notes (notes + durations)
  for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {

    // calculates the duration of each note
    divider = melody[thisNote + 1];
    if (divider > 0) {
      // regular note, just proceed
      noteDuration = (wholenote) / divider;
    } else if (divider < 0) {
      // dotted notes are represented with negative durations!!
      noteDuration = (wholenote) / abs(divider);
      noteDuration *= 1.5; // increases the duration in half for dotted notes
    }

    // Plays notes for 90% of the duration, and gives 10% leeway (this resolves the resonance of the piazza buzzer
    tone(melody_buzzer, melody[thisNote], noteDuration*0.9);

    // Wait for the specify the duration of the note before playing the next note.
    delay(noteDuration);
    
    // stop the waveform generation before the next note.
    noTone(melody_buzzer);
  }

}

void loop() {
  // put function below to repeat it
}

