#include <pitches.h>

// difinimos los botones como notas en el sistema anglosajón
#define C 2
#define c 3
#define D 4
#define LED 8
#define buzzer 10
int melody5[] = { //santa claus
  NOTE_G4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_G4, NOTE_G4,
  NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, NOTE_C5,
  NOTE_E4, NOTE_F4, NOTE_G4, NOTE_G4, NOTE_G4,
  NOTE_A4, NOTE_G4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_G4, NOTE_C4, NOTE_E4,
  NOTE_D4, NOTE_F4, NOTE_B3,NOTE_C4};
int noteDurations5[] = {8, 8, 8, 4, 4, 4, 8, 8, 4, 4, 4, 8, 8, 4, 4, 4, 8, 8, 4, 2, 4 , 4, 4, 4, 4, 2, 4, 1};

void setup() {
  // se inicializa el serial
  Serial.begin(9600);
  // Definimos los botones como imput
  // Se montan con pulldown para evitar falsas lecturas
  pinMode(C, INPUT);
  pinMode(c, INPUT);
  pinMode(D, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // read the input pin:
  int stboton2 = digitalRead(C);
  int stboton3 = digitalRead(c);
  int stboton4 = digitalRead(D);
  digitalWrite(LED, LOW);
  // Imprimimos el estado del boton
  if (stboton2 == HIGH || stboton3 == HIGH|| stboton4 == HIGH){
    if (stboton2 == HIGH)
      Serial.println('C');
    if (stboton3 == HIGH)
      Serial.println('c');
    if (stboton4 == HIGH)
      Serial.println('D');
  }
  else if (Serial.read() == '7'){
    digitalWrite(LED,HIGH);
    for (int nota = 0; nota < 27; nota++)
    {
      int duracion = 1000 / noteDurations5[nota];
      tone(buzzer, melody5[nota], duracion);
      int pausas = duracion * 1.30;
      delay(pausas);
      noTone(buzzer);
      //val = '0';
    }
  }
  delay(100);        // delay entre lecturas para conseguir estabilidad
}
