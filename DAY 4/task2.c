#include<stdio.h>
typedef struct{
    char address[200];
    long pincode;
}Address;
typedef struct{
 int id;
 char name[100];
 double capital;
 Address a;
}member;
void print(int n,member m[n]){
    printf("MEMBER LEDGER\n");
    for(int i=0;i<n;i++){
           printf("%d\t",m[i].id);
           printf("%s\t",m[i].name);
            
            printf("%s\t",m[i].a.address);
         printf("%ld\t",m[i].a.pincode);
         printf("%.2f\n",m[i].capital);
    }

}
double totalShare(int n,member m[n]){
    double t=0;
    for(int i=0;i<n;i++){
        t=t+m[i].capital;
    }
    return t;
}
void highestHolder(int n,member m[n]){
    int max=0;
    for(int i=0;i<n;i++){
        if(m[i].capital > m[max].capital){
            max=i;
        }
    }
    printf("Highest holder : %d\t%s\t%s\t%ld\t%.2f\n",m[max].id,m[max].name,m[max].a.address,m[max].a.pincode,m[max].capital);
}

int main(){
    int n;
    printf("Enter n members:");
    scanf("%d",&n);
    if(n <= 0){
        printf("Invalid count\n");
        return 0;
    }
    member m[n];
    for(int i=0;i<n;i++){
        scanf("%d",&m[i].id);
        scanf("%s",m[i].name);
        scanf("%lf",&m[i].capital);
        scanf("%s",m[i].a.address);
        scanf("%ld",&m[i].a.pincode);
    }
print(n,m);
double t=totalShare(n,m);
printf("Total share capital (Rs): %.2f\n",t);
highestHolder(n,m);
return 0;

}
