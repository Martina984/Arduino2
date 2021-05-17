int distancia = 0 ;

int promedio = 0 ;

long  readUltrasonicDistance ( int triggerPin, int echoPin)
{
  pinMode (triggerPin, SALIDA);  
  digitalWrite (triggerPin, LOW);
  delayMicroseconds ( 2 );
  
  digitalWrite (triggerPin, HIGH);
  delayMicroseconds ( 10 );
  digitalWrite (triggerPin, LOW);
  pinMode (echoPin, ENTRADA);
  
  return  pulseIn (echoPin, HIGH);
}

contador int ;

 configuración vacía ()
{
  De serie. comenzar ( 9600 );

}

 bucle vacío ()
{
  promedio = 0 ;
  para (contador = 0 ; contador < 5 ; ++ contador) {
    distancia = 0.01723 * readUltrasonicDistance ( 3 , 3 );
    promedio = (promedio + distancia);
    De serie. print ( " DISTANCIA = " );
    De serie. println (distancia);
  }
  promedio = (promedio / 5 );
  De serie. print ( " El promedio es " );
  De serie. print (promedio);
  De serie. println ( " cm " );
  retraso ( 10 );
}
