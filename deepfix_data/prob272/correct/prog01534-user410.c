#include <stdio.h>
int main(){
 int a1,a2,n,i=3,numb=0;
 scanf("%d",&a1);
 scanf("%d",&a2);
 scanf("%d",&n);
 while(i<=n) {
     numb=a1+a2-2;
     a1=a2;
     a2=numb;
     i++; }
 printf("%d",numb);
    return 0; }