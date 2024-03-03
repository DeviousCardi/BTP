#include <stdio.h>
int main(){
 int a1,a2,n,i=3;
 a1=scanf("%d",&a1);
 a2=scanf("%d",&a2);
 n=scanf("%d",&n);
 while(i<=n) {
     numb=a1+a2-2;
     a1=a2;
     a2=numb;
     i++; }
 printf("%d",numb);
    return 0; }