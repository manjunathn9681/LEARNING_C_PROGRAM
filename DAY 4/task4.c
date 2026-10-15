#include<stdio.h>
typedef union{
  float temperature;
  char doorS;
  long pulses;
}Union;
typedef struct{
int sensorID;
char tag;
Union u;
}

int main(){
int n;
printf("Enter n:");
scanf("%d",&n);


}