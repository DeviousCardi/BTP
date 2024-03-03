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
     if(b==1999&&b>=2011)
     {x=(b/sum)+1 ;
     ly=sum*x ;}
     if(b=2000)
     {x=(b/sum)+8 ;
      ly=sum*x ;}
      if(b>=2000&&b<=2011)
     {x=(b/sum)+2 ;
     ly=sum*x;}
     printf("%d",ly);
    return 0; }