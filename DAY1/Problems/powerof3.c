#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    if(n<=0){
        printf("False");
    }
    else{
        while(n%3==0){
            n=n/3;
        }
    }
    if(n==1){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}