#include <stdio.h>
int main() {
 int n;
 scanf("%d",&n);
 int a,b,c,sum;
 sum=0;
 do{
     a=n%10;
     sum=sum+a;
     b=n/10;
     n=b;}
     while(n==0);
     for(int i=2016;i>=2016,c!=0;i++)
     c=i%sum;
    if(c==0)
    {printf("%d",c);}
    return 0; }