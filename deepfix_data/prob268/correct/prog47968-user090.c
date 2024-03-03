#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m)
{long sum=0,count=0;
  if(sum==x)
  return 1;
  if(m==4)
  return -1;
  if(m==1)
 {sum=sum+1;printf("%ld",sum);
  return getways(x,m+1);} }
int main() {
    int N,i,x[3],add=0;
    scanf("%d",&N);
    return 0; }