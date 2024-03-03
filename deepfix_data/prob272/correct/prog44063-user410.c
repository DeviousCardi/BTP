#include <stdio.h>
int main(){
 int a1,a2,n,i=3,numb=0;
 scanf("%d",&a1);
 scanf("%d",&a2);
 scanf("%d",&n);
 if(n>2) {
 while(i<=n) {
     numb=a1+a2-2;
     a1=a2;
     a2=numb;
     i++; }
 printf("%d",numb); }
 else {
     if(n==1)
     printf("%d",a1);
     else
     printf("%d",a2); }
    return 0; }