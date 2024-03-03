#include <stdio.h>
int main(){
    int n,b,sum=0,y=2016,k;
    scanf("%d",&n);
    while(n>0){
        b=n%10;
        n=n/10;
        sum=sum+b; }
    while(y>=2016){
        k=y%sum;
        if(k==0){
            printf("%d",y);
            break; }
        y++; }
    return 0; }