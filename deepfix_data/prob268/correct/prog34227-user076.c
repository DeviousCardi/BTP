#include <stdio.h>
#include <stdlib.h>
int main() {
   int x;
   scanf("%d",&x);
  int p,q,r,t,s,u,l;
  p=x%3;
  q=(x-p)/3;
  r=x%5;
  t=(x-r)/5;
  s=r%3;
  u=(r-s)/3;
  l=q+t+u+1;
  printf("%d",l);
    return 0; }