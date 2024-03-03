#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m,int sum)
{long count=0;
  if(sum==64)
  return 1;
  if(m==1)
  if(m==2)
   getways(x-1,m,sum+1)||getways(x-3,m,sum+1) ;
  if(m==3)
  getways(x,m,sum+3)+getways(x,m,sum+5)+getways(x,m,sum+1);
   printf("%d ",sum); }
int main() {
    int N,i,add=0;
    scanf("%d",&N);
    getways(N,3,0);
    return 0; }