int pantalla = 0;
import processing.serial.*;
Serial arduino;
PrintWriter salida;
char tecla = 'p';

void setup()
{
  background(0);
  size(1360,768);

}

void inicio()
{
  background(0);

  fill(255);
  rect(806, 300, 280, 130, 20);
  rect(254, 300, 280, 130, 20);//rectángulos menú de inicio

  textSize(58);
  fill(0);
  textAlign(CENTER);
  text("PLAY", 940, 768/2);
  text("DEMO", 385, 768/2);
}

void draw(){
  switch(pantalla)
  {
    case 0:
      inicio();
    break;
    
    case 1: 
      demo();
    break;
    
  }
}


void demo()
{

  textSize(56);
  fill(255);
  background(0);

  rect(540, 300, 280, 130, 20);
  rect(150, 300, 280, 130, 20);//rectángulos centrales
  rect(930, 300, 280, 130, 20);
  
  rect(540, 500, 280, 130, 20);
  rect(150, 500, 280, 130, 20);//rectángulos inferiores
  rect(930, 500, 280, 130, 20);
  
  rect(540, 100, 280, 130, 20);
  rect(150, 100, 280, 130, 20);//rectángulos superiores
  rect(930, 100, 280, 130, 20);
  
  fill(0);
  text("Star Wars",1360/2 ,768/2);
  text("Tetris", 290, 768/2);
  text("Super Mario", 1070, 768/2);
  text("Zelda", 1360/2, 180);
  text("Santa Claus", 1360/2, 580);
  text("Harry Potter", 290, 580);
  text("Sonic", 1070, 580); 
  text("Mii Chanel", 1070, 180); 
  text("Key Cat", 290, 180);
  
}
