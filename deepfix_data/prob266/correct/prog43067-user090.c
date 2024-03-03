#include <stdio.h>
int main(){
    int n,a,x,ly;
    scanf("%d",&n);
    int sum=0;
    while(n>0)
    {a=n%10;
     n=n/10;
     sum=sum+a;}
     x=(n/sum)+1 ;
     ly=sum*x ;
     printf("%d",ly);
    return 0; }