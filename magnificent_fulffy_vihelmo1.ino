int RED = 1;
int YELLOW = 2;
int GREEN = 4;
int Button = 3;
void setup(){ pinMode(RED,OUTPUT);
              pinMode(YELLOW,OUTPUT);
              pinMode(GREEN,OUTPUT);
              pinMode(Button,INPUT_PULLUP);
            }
void loop(){
            if(digitalRead(Button)==LOW)
                 {
                    digitalWrite(RED,HIGH);
                    delay(10000);
                    digitalWrite(RED,LOW);
                 }
             else
                 {
                    digitalWrite(RED,HIGH);
                    delay(3000);
                    digitalWrite(RED,HIGH);
                    digitalWrite(YELLOW,HIGH);
                    delay(2000);
                    digitalWrite(RED,LOW);
                    digitalWrite(YELLOW,LOW);
                    digitalWrite(GREEN,HIGH);
                    delay(3000);
                    digitalWrite(GREEN,HIGH);
                    digitalWrite(YELLOW,HIGH);
                    delay(2000);
                    digitalWrite(GREEN,LOW);
                    digitalWrite(YELLOW,LOW);
                    }
                  }






