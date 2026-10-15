#include<stdio.h>
int main(){
    char text[]="Reva";
    char *p=text;

    while(*p != '\0'){
        printf("%c",*p);
        p++;
    }
}