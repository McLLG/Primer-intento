//Primer Intento; Caracteristica principal es que no usa el Delay 
//A diferencia de la función delay el programa no detiene la ejecución de los comandos en el código

unsigned long currentTime;
boolean ledState = 0;          

void setup() {
    pinMode(10, OUTPUT);
}

void loop() {
    if (millis() - currentTime > 500)     //Cada 500 milisegundos, el estado de la variable boleana se invierte 
    {
       currentTime = millis();          //Milis no detiene la ejecucuón del programa, sino que inicia a contar el tiempo desde el contador 
       ledState=!ledState;
       digitalWrite(10, ledState);
    }
}
