#include<stdio.h>
int main(){
    int n,rev=0;
    printf("Enter number:");
    scanf("%d",&n);

    if(n<=0)printf("false");
    int o=n;
    while(n>0){
int rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(0==n){
        printf("pa");

    }
    printf("%d",2^2);
    return 0;
}