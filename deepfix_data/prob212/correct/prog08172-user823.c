#include <stdio.h>
int main(){
    int n,b,p,sum=0;
    scanf("%d",&n);
    while(n>0){
        b=n%10;
        n=n/10;
        sum=sum+b; }
    p=sum;
    int y;
    while(y>=2016){
        if(y%p==0)
        printf("%d",y);
        y++;
        break; }
    return 0; }