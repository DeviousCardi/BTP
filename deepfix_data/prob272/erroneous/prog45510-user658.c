#include <stdio.h>
int main(){
 int a1,a2,n;
 int i,A1,A2,J;
 scanf("%d %d %d",a1,a2,n);
 if(n==1)
 printf("%d",a1);
 if(n==2)
 printf("%d",a2);
 if(n>2) {
  A1=a1;
  A2=a2;
  for(i=3;i<=n;i=i+1)
  {  J=A1+A2-2;
    A1=A2;
    A2=J; }
  printf("%d",J);
    return 0; }