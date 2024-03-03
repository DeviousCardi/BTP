#include <stdio.h>
#include <stdlib.h>
long getways(int x)
{int p,q,r,t,s,u,l;
if(x<5){
  p=x%3;
  q=(x-p)/3;
  return (p+1);}
else {
   p=x%3;
  q=(x-p)/3;
  r=x%5;
  t=(x-r)/5;
  s=r%3;
  u=(r-s)/3;
  l=q+t+u+1;
  return (l);} }
int main() {
   int x;
   long l;
   scanf("%d",&x);
  l = getways(x);
  printf("%ld",l);
    return 0; }