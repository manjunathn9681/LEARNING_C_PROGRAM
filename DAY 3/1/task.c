#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,50};

    int *ptr=&arr[1];
    int *q=&arr[3];

    int result=q-ptr;
    printf("%d",result);




    return 0;

}