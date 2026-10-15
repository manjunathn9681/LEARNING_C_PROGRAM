#include<stdio.h>
#include<stdlib.h>
typedef struct{
    long ticketno;
    char vr[100];
    float grossw;
    float tare;
}ticket;
double Helper1(ticket *t){
    double net=(t->grossw)-(t->tare);
return net;
}
void Helper2(ticket *t,double n){
    printf("%ld\t%s\tgross\t%.2f\ttare\t%.2f\tnet\t%.2f\n",t->ticketno,t->vr,t->grossw,t->tare,n);
}


int main(){
int n;

printf("Enter n:");
scanf("%d",&n);
if(n<=0|| n>=100000){
    printf("Invalid Count");
    return 0;
}
ticket *t=(ticket*)calloc(n,sizeof(ticket));
for(int i=0;i<n;i++){
    scanf("%ld",&t[i].ticketno);
    scanf("%s",t[i].vr);
    scanf("%f",&t[i].grossw);
    scanf("%f",&t[i].tare);
}
double totalw;
for(int i=0;i<n;i++){
    Helper2((t+i),Helper1(t+i));
    totalw+=Helper1(t+i);
}
printf("Tickets: %d\n",n);
printf("Total net weight (kg): %.2f\n",totalw);
int max=0;
for(int i=0;i<n;i++){
if(Helper1(t+i) > Helper1(t+max)){
    max=i;
}
}
printf("Heaviest net load: %ld\t%s\tgross\t%.2f\ttare\t%.2f\tnet\t%.2f\n",(t+max)->ticketno,(t+max)->vr,(t+max)->grossw,(t+max)->tare,Helper1(t+max));
free(t);
t=NULL;
return 0;
}