#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,x,count=0,sum=0,state=0;
scanf("%d",&n);
for(i=0;i<n/2;i++)
{if(n%i==0)
   {state=1;
       count++;}
   else continue;
  if(state==1) {
      x=sum+i; }
  if(n=x)
  printf("YES"); }
return 0; }