#include <stdio.h>
int main(){
 int n,sum=0,a,i;
 scanf("%d",&n);
 while(n!=0) {
     a=n%10;
     sum=sum+a;
     n=(n%10)/10;
   return 0; }
 for(i=n+1;i>n;i++) {
     if((i%sum)==0)
     {break;} }
 printf("%d",i);
 return 0; }