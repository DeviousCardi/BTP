#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m)
{long count=0;
  if(x==0)
  return 1;
  if(m==1)
  return getways(x-1,m);
  if(m==2)
  return getways(x-1,m)||getways(x-3,m) ;
  if(m==3)
  return getways(x-1,m)||getways(x-3,m)||getways(x-5,m) ;
   printf("%d ",x); }
int main() {
    int N,i,x[3],add=0;
    scanf("%d",&N);
    getways(N,1);
    return 0; }