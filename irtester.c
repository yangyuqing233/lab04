#include <stdio.h>
#include <wiringPi.h>

int main(int argc, char *argv[]){
int i;
  wiringPiSetup () ;
  pinMode(0, INPUT);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  while(1) {

    printf("waitting for reset\n");
    while (digitalRead(0)==1){
    printf("Got a 1\n");
    digitalWrite(2,HIGH);
    digitalWrite(1,LOW);
    
 }
   printf("waitting for event\n");
    if(digitalRead(0) == 0){
    printf("Got a 0\n");
    digitalWrite(2,LOW);
    digitalWrite(1,HIGH);delay(200);
    digitalWrite(1,LOW);
    printf("Waiting for reset\n");}
    
    while(digitalRead(0) == 0){
    printf("Waiting for event\n");
    digitalWrite(1, HIGH); delay(500);
    digitalWrite(2, LOW);
	}
    
    while(digitalRead(0) == 1){

    printf("Alarm\n");
    digitalWrite (2, HIGH); delay(500);
    digitalWrite (1, LOW);
  	}
  }
  /*NOTREACHED*/
return 0 ;
}
