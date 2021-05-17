int promedioDistancia = 0 ;

int promediaTemperatura = 0 ;

int distancia = 0 ;

int temperatura = 0 ;

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
  pinMode (A0, ENTRADA);
  De serie. comenzar ( 9600 );

}

 bucle vacío ()
{
  promedioDistancia = 0 ;
  promediaTemperatura = 0 ;
  para (contador = 0 ; contador < 5 ; ++ contador) {
    distancia = 0.01723 * readUltrasonicDistance ( 7 , 7 );
    temperatura = - 40 + 0.488155 * ( analogRead (A0) - 20 );
    promedioDistancia = (promedioDistancia + distancia);
    promediaTemperatura = (promediaTemperatura + temperatura);
    De serie. print ( " Distancia = " );
    De serie. imprimir (distancia);
    De serie. print ( " Temperatura = " );
    De serie. println (temperatura);
  }
  promedioDistancia = (promedioDistancia / 5 );
  promediaTemperatura = (promediaTemperatura / 5 );
  De serie. print ( " La temperatura promedio es de " );
  De serie. imprimir (promediaTemperatura);
  De serie. print ( " grados y la distancia promedio es de " );
  De serie. print (promedioDistancia);
  De serie. println ( " cm " );
  retraso ( 10 );
}
