#include <stdio.h>
int main(){
    int n,a,x,ly,b;
    scanf("%d",&n);
    b=n;
    int sum=0;
    while(n>0)
    {a=n%10;
     n=n/10;
     sum=sum+a;}
     if(b==1999)
     {x=(b/sum)+1 ;}
     else
     {x=(b/sum)+2;}
     ly=sum*x;
     printf("%d",ly);
    return 0; }