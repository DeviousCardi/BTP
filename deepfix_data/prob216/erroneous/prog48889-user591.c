#include <stdio.h>
#include <stdlib.h>
a(int k);
scanf("%d",&k);
    if (k==1)
  return 0;
  if (k==2)
  return 1;
  else
return a(k)=a(k-1)+ a( k-2);
int main(){
    int t;
    scanf("%d",&t);
   for(k=0;k<=20;k=k+1)
   printf("%d\n",a(k));
return 0; }