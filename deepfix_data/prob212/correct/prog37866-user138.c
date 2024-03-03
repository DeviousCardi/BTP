#include <stdio.h>
int main() {
 int n;
 scanf("%d",&n);
 int a,b,c,d,sum;
 sum=0;
 c=2016;
 d=2016;
 do{
     a=n%10;
     sum=sum+a;
     b=n/10;
     n=b;}
     while(n!=0);
     while(d!=0)
     {d=c%sum;
     c=c+1;}
    return 0; }