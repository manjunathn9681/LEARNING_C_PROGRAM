#include<stdio.h>
int eating(int b[], int n, int h){
  int left=1, right=0;
    for(int i=0;i<n;i++){
        if(b[i]>right){
            right=b[i];
        }
    }
    int speed=right;
    while(left<=right){
        int mid=(left+right)/2;
        int totalHours=0;
        for(int i=0;i<n;i++){
            totalHours+=(b[i]+mid-1)/mid;
        }
        if(totalHours>h){
            left=mid+1;
        }
            else{
                speed=mid;
                right=mid-1;
            }
         
}
return speed;
}
int main(){
    int b[]={3,2,2,4,1,4};
    int h=3;    
    int n=sizeof(b)/sizeof(int);
    int result=eating(b,n,h);
    printf("Minimum eating speed: %d\n", result);
}