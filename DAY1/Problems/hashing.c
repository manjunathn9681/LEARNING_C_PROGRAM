#include<stdio.h>
int main(){
    char str[]="aabbccddeeff";
    int hash[26]={0};
    for(int i=0;str[i]!='\0';i++){
        hash[str[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(hash[i]>0){
            printf("%c: %d\n",i+'a',hash[i]);
        }
    }
    return 0;
}