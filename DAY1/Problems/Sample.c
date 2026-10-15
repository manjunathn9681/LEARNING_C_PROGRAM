#include<stdio.h>
int main(){
 int m=242;
 int notes[]={100,50,20,10,5,2,1};
 int n=sizeof(notes)/sizeof(int);
 int count=0;
 for(int i=0;i<n;i++){
count+=m/notes[i];
m=m%notes[i];
 }

printf("%d",count);
return 0;
}