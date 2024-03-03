#include <stdio.h>
int main(){
    int n,a,x,ly,b;
    n=b;
    scanf("%d",&n);
    int sum=0;
    while(n>0)
    {a=n%10;
     n=n/10;
     sum=sum+a;}
     x=(b/sum)+1 ;
     ly=sum*x ;
     printf("%d",ly);
    return 0; }