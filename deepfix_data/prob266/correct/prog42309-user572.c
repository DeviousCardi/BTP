#include <stdio.h>
int main(){
 int n,i,sum=0,a;
 scanf("%d",&n);
 while(n!=0) {
     a=n%10;
     sum=sum+a;
     n=(n)/10; }
 for(i=2016;;i++) {
     if((i%sum)==0)
     {break;} }
 printf("%d",i);
 return 0; }