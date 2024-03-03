#include <stdio.h>
int main(){
 int n,i,sum=0,a;
 scanf("%d",&n);
 while(n!=0) {
     a=n%10;
     sum=sum+a;
     n=(n)/10; }
    i=2016+(sum-2016%sum);
 printf("%d",i);
 return 0; }