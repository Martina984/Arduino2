# incluye  < Servo.h >

int pos = 0 ;

Servo servo_9;

 configuración vacía ()
{
  servo_9. adjuntar ( 9 , 500 , 2500 );

}

 bucle vacío ()
{
   0 a 180 grados en pasos

  para (pos = 0 ; pos <= 180 ; pos + = 1 ) {
    
    servo_9. escribir (pos);
    
    retraso ( 15 );
  }
  para (pos = 180 ; pos> = 0 ; pos - = 1 ) {
    servo_9. escribir (pos);
    retraso ( 15 );
  }
}
