#include<stdio.h>
void print(int n){
    if(n>5){
        return;
    }
    print(n+1);
    printf("%d ",n);
}
int main(){
    int n=1;
print(n);
}