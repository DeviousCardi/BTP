#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m,int sum)
{long count=0;
  if(x==0)
  return 1;
  if(m==1)
  return getways(x-1,m,sum+1);
  if(m==2)
  return getways(x-1,m,sum+1)||getways(x-3,m,sum+1) ;
  if(m==3)
  return getways(x-1,m,sum+1)||getways(x-3,m,sum+1)||getways(x-5,m,sum+1) ;
   printf("%d ",x); }
int main() {
    int N,i,x[3],add=0;
    scanf("%d",&N);
    getways(N,1,0);
    return 0; }