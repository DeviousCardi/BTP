#include <stdio.h>
int main(){
 int n,sum=0,a,i;
 scanf("%d",&n);
 while(n!=0) {
     a=n%10;
     sum=sum+a;
     n=(n)/10; }
 for(i=n+1;;i++) {
     if((i%sum)==0)
     { printf("%d",i);break;} }
 return 0; }