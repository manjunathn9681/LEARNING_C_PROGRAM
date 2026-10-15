#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
    int (*ptr)(int,int)=add;
    int x=10;
    int y=20;
    int *const p=&x;
    *p=50;

    printf("%d\n",x);

    printf("%d\n",ptr(10,20));
    return 0;

}