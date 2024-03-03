#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m,int sum)
{long count=0;
  if(sum==x)
  return 1;
  if(m==4)
  return -1;
  if(m==1)
 {printf("%ld",sum);
  return getways(x,m,sum+1);}
  if(m==2)
  return getways(x,m,sum+1)||getways(x,m,sum+3) ;
  if(m==3)
  return getways(x,m,sum+1)||getways(x,m,sum+3)||getways(x,m,sum+5) ; }
int main() {
    int N,i,x[3],add=0;
    scanf("%d",&N);
    getways(N,1,0);
    return 0; }