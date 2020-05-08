#include <pitches.h>

// difinimos los botones como notas en el sistema anglosajón
#define C 2
#define c 3
#define D 4
#define d 5
#define E 6
#define F 7
#define f 8
#define G 9
#define g 10
#define A 11
#define a 12
#define buzzer 13
// Melody 2: Star Wars Theme
int melody2[] = {  NOTE_F4,  NOTE_F4, NOTE_F4,  NOTE_AS4,   NOTE_F5,  NOTE_DS5,  NOTE_D5,  NOTE_C5, NOTE_AS5, NOTE_F5, NOTE_DS5,  NOTE_D5,  NOTE_C5, NOTE_AS5, NOTE_F5, NOTE_DS5, NOTE_D5, NOTE_DS5,   NOTE_C5};
int noteDurations2[]  = {  21,  21, 21,  128,  128,   21,  21,  21, 128, 64,  21,  21,  21, 128, 64,  21, 21,  21, 128 };
//Tetris melody
int melody1[] = {
  NOTE_E5, NOTE_E3, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_D5, NOTE_C5,
  NOTE_B4, NOTE_A4, NOTE_A3, NOTE_A4, NOTE_C5, NOTE_E5, NOTE_A3, NOTE_D5,
  NOTE_C5, NOTE_B4, NOTE_E4, NOTE_G4, NOTE_C5, NOTE_D5, NOTE_E3, NOTE_E5,
  NOTE_E3, NOTE_C5, NOTE_A3, NOTE_A4, NOTE_A3, NOTE_A4, NOTE_A3, NOTE_B2,
  NOTE_C3, NOTE_D3, NOTE_D5, NOTE_F5, NOTE_A5, NOTE_C5, NOTE_C5, NOTE_G5,
  NOTE_F5, NOTE_E5, NOTE_C3, 0, NOTE_C5, NOTE_E5, NOTE_A4, NOTE_G4, NOTE_D5,
  NOTE_C5, NOTE_B4, NOTE_E4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_G4, NOTE_E5,
  NOTE_G4, NOTE_C5, NOTE_E4, NOTE_A4, NOTE_E3, NOTE_A4, 0,
  NOTE_E5, NOTE_E3, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_D5, NOTE_C5,
  NOTE_B4, NOTE_A4, NOTE_A3, NOTE_A4, NOTE_C5, NOTE_E5, NOTE_A3, NOTE_D5,
  NOTE_C5, NOTE_B4, NOTE_E4, NOTE_G4, NOTE_C5, NOTE_D5, NOTE_E3, NOTE_E5,
  NOTE_E3, NOTE_C5, NOTE_A3, NOTE_A4, NOTE_A3, NOTE_A4, NOTE_A3, NOTE_B2,
  NOTE_C3, NOTE_D3, NOTE_D5, NOTE_F5, NOTE_A5, NOTE_C5, NOTE_C5, NOTE_G5,
  NOTE_F5, NOTE_E5, NOTE_C3, 0, NOTE_C5, NOTE_E5, NOTE_A4, NOTE_G4, NOTE_D5,
  NOTE_C5, NOTE_B4, NOTE_E4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_G4, NOTE_E5,
  NOTE_G4, NOTE_C5, NOTE_E4, NOTE_A4, NOTE_E3, NOTE_A4, 0,
  NOTE_E4, NOTE_E3, NOTE_A2, NOTE_E3, NOTE_C4, NOTE_E3, NOTE_A2, NOTE_E3,
  NOTE_D4, NOTE_E3, NOTE_GS2, NOTE_E3, NOTE_B3, NOTE_E3, NOTE_GS2, NOTE_E3,
  NOTE_C4, NOTE_E3, NOTE_A2, NOTE_E3, NOTE_A3, NOTE_E3, NOTE_A2, NOTE_E3,
  NOTE_GS3, NOTE_E3, NOTE_GS2, NOTE_E3, NOTE_B3, NOTE_E3, NOTE_GS2, NOTE_E3,
  NOTE_E4, NOTE_E3, NOTE_A2, NOTE_E3, NOTE_C4, NOTE_E3, NOTE_A2, NOTE_E3,
  NOTE_D4, NOTE_E3, NOTE_GS2, NOTE_E3, NOTE_B3, NOTE_E3, NOTE_GS2, NOTE_E3,
  NOTE_C4, NOTE_E3, NOTE_E4, NOTE_E3, NOTE_A4, NOTE_E3, NOTE_A2, NOTE_E3,
  NOTE_GS4, NOTE_E3, NOTE_GS2, NOTE_E3, NOTE_GS2, NOTE_E3, NOTE_GS2, NOTE_E3,
  NOTE_E5, NOTE_E3, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_D5, NOTE_C5,
  NOTE_B4, NOTE_A4, NOTE_A3, NOTE_A4, NOTE_C5, NOTE_E5, NOTE_A3, NOTE_D5,
  NOTE_C5, NOTE_B4, NOTE_E4, NOTE_G4, NOTE_C5, NOTE_D5, NOTE_E3, NOTE_E5,
  NOTE_E3, NOTE_C5, NOTE_A3, NOTE_A4, NOTE_A3, NOTE_A4, NOTE_A3, NOTE_B2,
  NOTE_C3, NOTE_D3, NOTE_D5, NOTE_F5, NOTE_A5, NOTE_C5, NOTE_C5, NOTE_G5,
  NOTE_F5, NOTE_E5, NOTE_C3, 0, NOTE_C5, NOTE_E5, NOTE_A4, NOTE_G4, NOTE_D5,
  NOTE_C5, NOTE_B4, NOTE_E4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_G4, NOTE_E5,
  NOTE_G4, NOTE_C5, NOTE_E4, NOTE_A4, NOTE_E3, NOTE_A4, 0,
  NOTE_E5, NOTE_E3, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_D5, NOTE_C5,
  NOTE_B4, NOTE_A4, NOTE_A3, NOTE_A4, NOTE_C5, NOTE_E5, NOTE_A3, NOTE_D5,
  NOTE_C5, NOTE_B4, NOTE_E4, NOTE_G4, NOTE_C5, NOTE_D5, NOTE_E3, NOTE_E5,
  NOTE_E3, NOTE_C5, NOTE_A3, NOTE_A4, NOTE_A3, NOTE_A4, NOTE_A3, NOTE_B2,
  NOTE_C3, NOTE_D3, NOTE_D5, NOTE_F5, NOTE_A5, NOTE_C5, NOTE_C5, NOTE_G5,
  NOTE_F5, NOTE_E5, NOTE_C3, 0, NOTE_C5, NOTE_E5, NOTE_A4, NOTE_G4, NOTE_D5,
  NOTE_C5, NOTE_B4, NOTE_E4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_G4, NOTE_E5,
  NOTE_G4, NOTE_C5, NOTE_E4, NOTE_A4, NOTE_E3, NOTE_A4, 0,
  NOTE_E4, NOTE_E3, NOTE_A2, NOTE_E3, NOTE_C4, NOTE_E3, NOTE_A2, NOTE_E3,
  NOTE_D4, NOTE_E3, NOTE_GS2, NOTE_E3, NOTE_B3, NOTE_E3, NOTE_GS2, NOTE_E3,
  NOTE_C4, NOTE_E3, NOTE_A2, NOTE_E3, NOTE_A3, NOTE_E3, NOTE_A2, NOTE_E3,
  NOTE_GS3, NOTE_E3, NOTE_GS2, NOTE_E3, NOTE_B3, NOTE_E3, NOTE_GS2, NOTE_E3,
  NOTE_E4, NOTE_E3, NOTE_A2, NOTE_E3, NOTE_C4, NOTE_E3, NOTE_A2, NOTE_E3,
  NOTE_D4, NOTE_E3, NOTE_GS2, NOTE_E3, NOTE_B3, NOTE_E3, NOTE_GS2, NOTE_E3,
  NOTE_C4, NOTE_E3, NOTE_E4, NOTE_E3, NOTE_A4, NOTE_E3, NOTE_A2, NOTE_E3,
  NOTE_GS4, NOTE_E3, NOTE_GS2, NOTE_E3, NOTE_GS2, NOTE_E3, NOTE_GS2, NOTE_E3,
};
const byte noteDurations1[] = {
  8, 8, 8, 8, 8, 16, 16, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
  8, 4, 8, 8, 16, 16, 8, 8, 8, 8, 8, 8, 8, 16, 16, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 4, 4,
  8, 8, 8, 8, 8, 16, 16, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
  8, 4, 8, 8, 16, 16, 8, 8, 8, 8, 8, 8, 8, 16, 16, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 4, 4,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 16, 16, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
  8, 4, 8, 8, 16, 16, 8, 8, 8, 8, 8, 8, 8, 16, 16, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 4, 4,
  8, 8, 8, 8, 8, 16, 16, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
  8, 4, 8, 8, 16, 16, 8, 8, 8, 8, 8, 8, 8, 16, 16, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 4, 4,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
};
// Zelda song:
int melody4[] = {
  NOTE_C4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_G4,  NOTE_E4,
  NOTE_C4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_E4,  NOTE_F4,
  NOTE_C4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_G4,  NOTE_CS4,
  NOTE_C4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_CS4, NOTE_C4,
  NOTE_C4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_DS4, NOTE_CS4,
  NOTE_A3, NOTE_G3, NOTE_G4, NOTE_F4, NOTE_FS4, NOTE_F4,
  NOTE_G4, NOTE_F4, NOTE_G4, NOTE_CS4, NOTE_F4, NOTE_G4,
  NOTE_F4, NOTE_CS4, NOTE_C4
};

// note durations ZELDA
int noteDurations4[] = {
                    3, 4, 4, 6, 6, 3,
                        4, 6, 6, 4, 4, 3,
                        2, 6, 6, 4, 6, 6,
                        3, 4, 4, 6, 6, 3,
                        3, 4, 4, 6, 6, 3,
                        4, 6, 6, 4, 4, 3,
                        4, 6, 6, 4, 6, 6,
                        3, 4, 4
                      };
int melody5[] = { //santa claus
  NOTE_G4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_G4, NOTE_G4,
  NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, NOTE_C5,
  NOTE_E4, NOTE_F4, NOTE_G4, NOTE_G4, NOTE_G4,
  NOTE_A4, NOTE_G4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_G4, NOTE_C4, NOTE_E4,
  NOTE_D4, NOTE_F4, NOTE_B3,NOTE_C4};
int noteDurations5[] = {8, 8, 8, 4, 4, 4, 8, 8, 4, 4, 4, 8, 8, 4, 4, 4, 8, 8, 4, 2, 4 , 4, 4, 4, 4, 2, 4, 1};
int melody3[] = {
  NOTE_E7, NOTE_E7, 0, NOTE_E7,
  0, NOTE_C7, NOTE_E7, 0,
  NOTE_G7, 0, 0,  0,
  NOTE_G6, 0, 0, 0,
 
  NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0,
 
  NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0,
 
  NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0,
 
  NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0
};
//Mario main them tempo
int noteDurations3[] = {
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
};
int melody6[]= {};
int noteDurations6[]={};
int melody7[]={};
int noteDurations7[]={};
int melody8[] = {
  
  // Mii Channel theme 
  // Score available at https://musescore.com/user/16403456/scores/4984153
  // Uploaded by Catalina Andrade 
  #define REST 0
  
  NOTE_FS4, 0, NOTE_A4, NOTE_CS5, 0,NOTE_A4, 0, NOTE_FS4, //1
  NOTE_D4, NOTE_D4, NOTE_D4, 0, 0, 0, NOTE_CS4,
  NOTE_D4, NOTE_FS4, NOTE_A4, NOTE_CS5, 0, NOTE_A4, 0, NOTE_F4,
  NOTE_E5, NOTE_DS5, NOTE_D5, 0, 0,
  
  NOTE_GS4, REST, NOTE_CS5, NOTE_FS4, 0,NOTE_CS5 ,0, NOTE_GS4, //5
  0, NOTE_CS5, NOTE_G4, NOTE_FS4, 0, NOTE_E4, 0,
  NOTE_E4, NOTE_E4, NOTE_E4, REST, REST, NOTE_E4, NOTE_E4,
  NOTE_E4, REST, REST, NOTE_DS4, NOTE_D4, 

  NOTE_CS4, REST, NOTE_A4, NOTE_CS5, REST,NOTE_A4, REST, NOTE_FS4, //9
  NOTE_D4, NOTE_D4, NOTE_D4, REST, NOTE_E5, NOTE_E5, NOTE_E5, REST,
  REST, NOTE_FS4, NOTE_A4, NOTE_CS5, REST, NOTE_A4, REST, NOTE_F4,
  NOTE_E5, NOTE_D5, REST, REST,

  NOTE_B4, NOTE_G4, NOTE_D4, NOTE_CS4, NOTE_B4, NOTE_G4, NOTE_CS4, //13
  NOTE_A4, NOTE_FS4, NOTE_C4, NOTE_B3, NOTE_F4, NOTE_D4, NOTE_B3,
  NOTE_E4, NOTE_E4, NOTE_E4, REST, REST, NOTE_AS4,
  NOTE_CS5, NOTE_D5, NOTE_FS5, NOTE_A5, REST, REST, 

  REST, NOTE_A3, NOTE_AS3, //17 
  NOTE_A3, NOTE_A3, NOTE_A3,
  REST, NOTE_A3, NOTE_AS3, NOTE_A3, NOTE_F4, NOTE_C4,
  NOTE_A3, NOTE_A3, NOTE_A3,

  REST, NOTE_B3, NOTE_C4, //21
  NOTE_CS4,- NOTE_C4, NOTE_CS4,
  REST, NOTE_CS4, NOTE_C4, NOTE_CS4, NOTE_GS4, NOTE_DS4,
  NOTE_CS4, NOTE_DS4, NOTE_B3,
  
  NOTE_E4, NOTE_E4, NOTE_E4, REST};//25
  //Durations song wii
  int noteDurations8[] = {8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
  4, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, -4, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 4,
  8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 2, 8, 8, 4, 8, 8, 8, 8,
  8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 4, 4, 8,
  8, 8, 8, 8, 4, 2, 4, 4, -4, 8, 2, 4, 8, 8, 8, 4, 8, -4,
  8, 2, 2, 4, 4, -4, 8, 2, 4, 8, 8, 8, 4, 8, -4, 8, 1, 4, 4, 4, 8};

int melody9[]={};
int noteDurations9[]={};

void setup() {
  // se inicializa el serial
  Serial.begin(9600);
  // Definimos los botones como imput
  // Se montan con pulldown para evitar falsas lecturas
  pinMode(C, INPUT);
  pinMode(c, INPUT);
  pinMode(D, INPUT);
  pinMode(d, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // read the input pin:
  int stboton2 = digitalRead(C);
  int stboton3 = digitalRead(c);
  int stboton4 = digitalRead(D);
  int stboton5 = digitalRead(d);
  int stboton6 = digitalRead(E);
  int stboton7 = digitalRead(F);
  int stboton8 = digitalRead(f);
  int stboton9 = digitalRead(G);
  int stboton10 = digitalRead(g);
  int stboton11 = digitalRead(A);
  int stboton12 = digitalRead(a);
  // Imprimimos el estado del boton
  if (stboton2 == HIGH)
    Serial.println('C');
  else if (stboton3 == HIGH)
    Serial.println('c');
  else if (stboton4 == HIGH)
    Serial.println('D');
  else if (stboton5 == HIGH)
    Serial.println('d');
  else if (stboton6 == HIGH)
    Serial.println('E');
  else if (stboton7 == HIGH)
    Serial.println('F');
  else if (stboton8 == HIGH)
    Serial.println('f');
  else if (stboton9 == HIGH)
    Serial.println('G');
  else if (stboton10 == HIGH)
    Serial.println('g');
  else if (stboton11 == HIGH)
    Serial.println('A');
  else if (stboton12 == HIGH)
    Serial.println('a');
  if (Serial.read()=='1'){
  for (int nota = 0; nota < 27; nota++)
    {
      int duracion = 1000 / noteDurations1[nota];
      tone(buzzer, melody1[nota], duracion);
      int pausas = duracion * 1.30;
      delay(pausas);
      noTone(buzzer);
    }
  }
  if (Serial.read()=='2'){
  for (int nota = 0; nota < 27; nota++)
    {
      int duracion = 1000 / noteDurations2[nota];
      tone(buzzer, melody2[nota], duracion);
      int pausas = duracion * 1.30;
      delay(pausas);
      noTone(buzzer);
    }
  }
  if (Serial.read()=='3'){
  for (int nota = 0; nota < 27; nota++)
    {
      int duracion = 1000 / noteDurations3[nota];
      tone(buzzer, melody3[nota], duracion);
      int pausas = duracion * 1.30;
      delay(pausas);
      noTone(buzzer);
    }
  }
  if (Serial.read()=='4'){
  for (int nota = 0; nota < 27; nota++)
    {
      int duracion = 1000 / noteDurations4[nota];
      tone(buzzer, melody4[nota], duracion);
      int pausas = duracion * 1.30;
      delay(pausas);
      noTone(buzzer);
    }
  }
  if (Serial.read()=='5'){
  for (int nota = 0; nota < 27; nota++)
    {
      int duracion = 1000 / noteDurations5[nota];
      tone(buzzer, melody5[nota], duracion);
      int pausas = duracion * 1.30;
      delay(pausas);
      noTone(buzzer);
    }
  }
  if (Serial.read()=='6'){
  for (int nota = 0; nota < 27; nota++)
    {
      int duracion = 1000 / noteDurations6[nota];
      tone(buzzer, melody6[nota], duracion);
      int pausas = duracion * 1.30;
      delay(pausas);
      noTone(buzzer);
    }
  }
  if (Serial.read()=='7'){
  for (int nota = 0; nota < 27; nota++)
    {
      int duracion = 1000 / noteDurations7[nota];
      tone(buzzer, melody7[nota], duracion);
      int pausas = duracion * 1.30;
      delay(pausas);
      noTone(buzzer);
    }
  }
  if (Serial.read()=='8'){
  for (int nota = 0; nota < 27; nota++)
    {
      int duracion = 1000 / noteDurations8[nota];
      tone(buzzer, melody8[nota], duracion);
      int pausas = duracion * 1.30;
      delay(pausas);
      noTone(buzzer);
    }
  }
  if (Serial.read()=='9'){
  for (int nota = 0; nota < 27; nota++)
    {
      int duracion = 1000 / noteDurations9[nota];
      tone(buzzer, melody9[nota], duracion);
      int pausas = duracion * 1.30;
      delay(pausas);
      noTone(buzzer);
    }
  }
  delay(100);        // delay entre lecturas para conseguir estabilidad
}
