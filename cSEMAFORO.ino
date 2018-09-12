//PEDRO ANTONIO SANABIA NAVARRO
//ING. SISTEMAS COMPUTACIONALES
//Variables
//asignacion de puerto a cada uno de los LED's
int ledverde1 = 1; //el numero indica el numero de puerto del arduino
int ledverde2 = 5;  //aqui es la entrada digital 5 
int ledverde3 = 10;  //y asi con cada numero 
int ledamarillo1 = 2;
int ledamarillo2 = 6;
int ledamarillo3 = 11;
int ledrojo1 = 3;
int ledrojo2 = 7;
int ledrojo3 = 12;
int ledblancos = 13;
//PEDRO ANTONIO SANABIA NAVARRO
//ING. SISTEMAS COMPUTACIONALES
void setup() {
  // put your setup code here, to run once:
pinMode(ledverde1, OUTPUT);
pinMode(ledverde2, OUTPUT);
pinMode(ledverde3, OUTPUT);
pinMode(ledamarillo1, OUTPUT);
pinMode(ledamarillo2, OUTPUT);
pinMode(ledamarillo3, OUTPUT);
pinMode(ledrojo1, OUTPUT);
pinMode(ledrojo2, OUTPUT);
pinMode(ledrojo3, OUTPUT);
pinMode(ledblancos, OUTPUT);
}
//PEDRO ANTONIO SANABIA NAVARRO
//ING. SISTEMAS COMPUTACIONALES
void loop() 
{
// put your main code here, to run repeatedly:
  
//manda a apagar todos los LED's excepto ROJO2, ROJO3 y BLANCOS
digitalWrite(ledverde1, HIGH);
delay(250);
digitalWrite(ledamarillo1, HIGH);
delay(250);
digitalWrite(ledverde2, HIGH);
delay(250);
digitalWrite(ledamarillo2, HIGH);
delay(250);
digitalWrite(ledverde3, HIGH);
delay(250);
digitalWrite(ledamarillo3, HIGH);
delay(250);
digitalWrite(ledrojo1, HIGH);
delay(250);
//manda a apagar todos los LED's excepto ROJO2, ROJO3 y BLANCOS

//PEDRO ANTONIO SANABIA NAVARRO
//ING. SISTEMAS COMPUTACIONALES

//Inicio el primer semaforo
digitalWrite(ledverde1, LOW);     //Enciende el led verde,
delay(9000);                      //prende por 9 segundos.
digitalWrite(ledverde1, HIGH);    
delay(250);                       
digitalWrite(ledverde1, LOW);     //Parpadea el LED verde1, 
delay(250);                       
digitalWrite(ledverde1, HIGH);    //para hacer el cambio al 
delay(250);
digitalWrite(ledverde1, LOW);     //siguiente color del semaforo 
delay(250);
digitalWrite(ledverde1, HIGH);    //que sera el amarillo
delay(250);

//PEDRO ANTONIO SANABIA NAVARRO
//ING. SISTEMAS COMPUTACIONALES

digitalWrite(ledamarillo1, LOW);   //le damos la señal al LEDamarillo
delay(250);                        //que se apague por 1/4 de segundo
digitalWrite(ledamarillo1, HIGH);  //y encienda por 1/4 de segundo 
delay(250);
digitalWrite(ledamarillo1, LOW);   
delay(250);
digitalWrite(ledamarillo1, HIGH);  //y repertir eso mismo
delay(250);
digitalWrite(ledamarillo1, LOW);   
delay(250);
digitalWrite(ledamarillo1, HIGH);   //3 veces
delay(250);

digitalWrite(ledrojo1, HIGH);  1
delay(100);
digitalWrite(ledrojo1, LOW);
delay(100);

//PEDRO ANTONIO SANABIA NAVARRO
//ING. SISTEMAS COMPUTACIONALES

//semaforo2 
//incia mandando a apagando el LEDrojo2 
digitalWrite(ledrojo2, HIGH);
delay(250);

digitalWrite(ledverde2, LOW);  
delay(9000);                    
digitalWrite(ledverde2, HIGH);  
delay(250);                    
digitalWrite(ledverde2, LOW);  
delay(250);
digitalWrite(ledverde2, HIGH);
delay(250);
digitalWrite(ledverde2, LOW);  
delay(250);
digitalWrite(ledverde2, HIGH);
delay(250);

digitalWrite(ledamarillo2, LOW);  
delay(250);
digitalWrite(ledamarillo2, HIGH);
delay(250);
digitalWrite(ledamarillo2, LOW);  
delay(250);
digitalWrite(ledamarillo2, HIGH);
delay(250);
digitalWrite(ledamarillo2, LOW);  
delay(250);
digitalWrite(ledamarillo2, HIGH);
delay(250);


digitalWrite(ledrojo2, HIGH);
delay(100);
digitalWrite(ledrojo2, LOW);
delay(100);

//semaforo Antonio C

digitalWrite(ledrojo3, HIGH);
delay(250);


digitalWrite(ledverde3, LOW);  
delay(9000);                   
digitalWrite(ledverde3, HIGH); 
delay(250);                   
digitalWrite(ledverde3, LOW);  
delay(250);
digitalWrite(ledverde3, HIGH);
delay(250);
digitalWrite(ledverde3, LOW);  
delay(250);
digitalWrite(ledverde3, HIGH);
delay(250);

digitalWrite(ledamarillo3, LOW);  
delay(250);
digitalWrite(ledamarillo3, HIGH);
delay(250);
digitalWrite(ledamarillo3, LOW);  
delay(250);
digitalWrite(ledamarillo3, HIGH);
delay(250);
digitalWrite(ledamarillo3, LOW);  
delay(250);
digitalWrite(ledamarillo3, HIGH);
delay(250);

digitalWrite(ledrojo3, HIGH);
delay(100);
digitalWrite(ledrojo3, LOW);
delay(100);
}

//PEDRO ANTONIO SANABIA NAVARRO
//ING. SISTEMAS COMPUTACIONALES
