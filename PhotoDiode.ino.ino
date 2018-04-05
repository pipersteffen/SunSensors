int N = 3; //number of photodiodes 

int val1 = 0;
int val2 = 0;
int val3 = 0;


void setup() {  
  
Serial.begin(9600);

}

void loop() {
  
val1 = analogRead(0);
val2 = analogRead(1);
val3 = analogRead(2);

int PhotoDiodeVals[N] = {val1, val2, val3};

Serial.println(val1);
Serial.println(val2);
Serial.println(val3);
Serial.println( );
Serial.println(PhotoDiodeVals[0]);
Serial.println(PhotoDiodeVals[1]);
Serial.println(PhotoDiodeVals[2]);
Serial.println( );
delay(1000);

}
