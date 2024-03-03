#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m,int sum)
{long count=0;
  if(x==0)
  return 1;
  if(m==1)
   getways(x-1,m,sum+1);
  if(m==2)
   getways(x-1,m,sum+1)||getways(x-3,m,sum+1) ;
  if(m==3)
  getways(x-1,m,sum+1)||getways(x-3,m,sum+1)||getways(x-5,m,sum+1) ;
   printf("%d ",sum); }
int main() {
    int N,i,x[3],add=0;
    scanf("%d",&N);
    getways(N,3,0);
    return 0; }