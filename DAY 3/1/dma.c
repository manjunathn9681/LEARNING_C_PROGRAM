#include<stdio.h>
#include<stdlib.h>

int main(){
    int n=4;
    int *arr;
    arr=(int*)malloc(sizeof(int)*n);
    if(arr==NULL)return -1;

    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
    }
    printf("Before\n");
      for(int i=0;i<n;i++){
        
        printf("%d",*(arr+i));
    }
    int *cal;
cal=(int*)calloc(sizeof(int),n);
printf("\nBefore\n");
  for(int i=0;i<n;i++){
       
        printf("%d",*(cal+i));
    }




}