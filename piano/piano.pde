//Programa Processing pianomatic
int pantalla = 0;
import processing.serial.*;
Serial arduino;
PrintWriter salida;
char tecla = 'p';
int duracion = 0;
int grabar = 0;
void setup()
{
  background(0);
  size(1360,768);
  arduino = new Serial(this, Serial.list()[1],9600);
  printArray(Serial.list());
  salida = createWriter("partitura.txt");
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
    
    case 2:
      play();
    break;
  }
}

void inicio()
{
  background(0);
  PFont font;
  font = loadFont("CommercialScriptBT-Regular-60.vlw");
  fill(255);
  rect(806, 300, 280, 130, 20);
  rect(254, 300, 280, 130, 20);//rectángulos menú de inicio
  textFont(font);
  textSize(58);
  fill(0);
  textAlign(CENTER);
  text("PLAY", 940, 768/2);
  text("DEMO", 385, 768/2);
}

void demo()
{
  PFont font;
  font = loadFont("CommercialScriptBT-Regular-60.vlw");
  textFont(font);
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

void play()
{
  int Do = 0, Dos = 0, Re = 0, Res = 0, Mi = 0, Fa = 0, Fas = 0, Sol = 0, Sols = 0, La = 0, Las = 0, Si = 0;//declaramos las constantes para que las notas aparezcan y desaparezcan a medida que pulsamos botones
  background(0);
  PFont font;
  font = loadFont("CommercialScriptBT-Regular-60.vlw");
  textFont(font);
  textSize(80);
  println(grabar);
  switch(grabar)
  {
    case(0):
      fill(255);
      rect(540, 500, 280, 130, 20);
      fill(0);
      text("Record", 1360/2-10, 580+10);
    break;
    
    case(1):
      fill(255,0,0);
      rect(540, 500, 280, 130, 20);
      fill(255);
      text("Stop", 1360/2-10, 580+10);
        
      if((char)arduino.read() == tecla) // si nuestra tecla es la misma que en el tic anterior, calculamos la cantidad de tiempo que dura nuestra pulsacion
        duracion++;
     
      else
      {
        salida.print(tecla);   //imprimimos la tecla que ya hemos dejado de pulsar 
        salida.println(duracion);  // junto con el tiempo que ha durado
        tecla = (char)arduino.read(); // obtenemos la nota nueva que estamos pulsando 
        duracion = 1;//reseteamos la duración y tras pintar la nota que hemos pulsado en pantalla se vuelve a realizar el bucle
      }
      break;
  }
  
  while((char)arduino.read() == 'C')
    Do = 255;
    
     while((char)arduino.read() == 'c')
        Dos = 255;
        
  while((char)arduino.read() == 'D')
    Re = 255;
    
     while((char)arduino.read() == 'd')
        Res = 255;
        
  while((char)arduino.read() == 'E')
    Mi = 255;
    
  while((char)arduino.read() == 'F')
    Fa = 255;
   
      while((char)arduino.read() == 'f')
        Fas = 255;
    
  while((char)arduino.read() == 'G')
    Sol = 255;
    
      while((char)arduino.read() == 'g')
        Sols = 255;
    
  while((char)arduino.read() == 'A')
    La = 255;
    
      while((char)arduino.read() == 'a')
        Las = 255;
    
  while((char)arduino.read() == 'B')
    Si = 255;
  
  
  fill(Do);
  text("C", 160,768/2);
  
    fill(Dos);
    text("C#", 160+80,768/2 - 80);
    
  fill(Re);  
  text("D", 316, 768/2);
  
    fill(Res);
    text("D#", 316+80 ,768/2-80);
    
  fill(Mi);
  text("E", 472, 768/2);
  
  fill(Fa);
  text("F", 628, 768/2);
  
    fill(Fas);
    text("F#", 628+80, 768/2-80);
    
  fill(Sol);
  text("G", 784, 768/2);
  
    fill(Sols);
    text("G#", 784+80, 768/2-80);
    
  fill(La);
  text("A", 940, 768/2);

    fill(Las);
    text("A#", 940+80, 768/2-80);
  
  fill(Si);
  text("B", 1096, 768/2);

  arduino.clear(); // este clear facilita la comunicación y sobre todo que las notas apuntadas en el fichero tengan duraciones fiables, por desgracia el serial no es un cable de fibra óptica y el buffer sufre en silencio si no lo limpiamos
}

void mousePressed()
{
  if(pantalla==0)
  {
    if(mouseY>300 && mouseY<430 && mouseX>254 && mouseX<534)//botón demo
        pantalla = 1;
    if(mouseY>300 && mouseY<430 && mouseX>806 && mouseX<1086)//botón play
        pantalla = 2;
        arduino.write('a');
    return;
  }
        

    
  if(pantalla == 1)//botones musica
  {
    if(mouseY>300 && mouseY<430 && mouseX>150 && mouseX<430)//boton tetris
        arduino.write('1');
    if(mouseY>300 && mouseY<430 && mouseX>540 && mouseX<820)//boton star wars
        arduino.write('2');
    if(mouseY>300 && mouseY<430 && mouseX>930 && mouseX<1210)//boton super mario 
        arduino.write('3');
        
    if(mouseY>500 && mouseY<630 && mouseX>150 && mouseX<430)
        arduino.write('4');
    if(mouseY>500 && mouseY<630 && mouseX>540 && mouseX<820)
        arduino.write('5');
    if(mouseY>500 && mouseY<630 && mouseX>930 && mouseX<1210)
        arduino.write('6');
         
    if(mouseY>100 && mouseY<230 && mouseX>150 && mouseX<430)
        arduino.write('7');
    if(mouseY>100 && mouseY<230 && mouseX>540 && mouseX<820)
        arduino.write('8');
    if(mouseY>100 && mouseY<230 && mouseX>930 && mouseX<1210)     
        arduino.write('9');
    return;
  }
  if(pantalla == 2)
  {
    if(mouseY>500 && mouseY<630 && mouseX>540 && mouseX<820)
    {
      switch(grabar)
      {
        case 0:
          grabar = 1;
        break;
        
        case 1:
          salida.flush();
          salida.close();
          grabar = 0;          
        break;
      }
      return;
    }  
  }
}
void keyPressed(){
  if(pantalla == 1 && key == TAB)
    pantalla = 0;
  if (pantalla == 2 && key == TAB)
    pantalla = 0;
    arduino.write('0');
    
}
