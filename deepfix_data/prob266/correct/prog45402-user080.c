#include <stdio.h>
int main() {
 int a,n,sum,i;
 sum=0;
 scanf("%d",&n);
 while(n!=0) {
     a=n%10;
     n=n/10;
     sum=sum+a; }
 for(i=2016;i<5000;i=i+1) {
     if((i%sum)==0)
     {break;} }
     printf("%d",i);
    return 0; }