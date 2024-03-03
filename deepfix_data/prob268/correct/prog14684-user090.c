#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m)
{long sum=0,count=0;
  if(sum==x)
  return 1;
  if(m==1)
 {sum=sum+*memarray[0];printf("%ld",sum);
  return getways(x,m);} }
int main() {
    int N,i,x[3],add=0;
    scanf("%d",&N);
    memarray[0]=1;
    memarray[1]=3;
    memarray[2]=5;
        x[1]=getways(N,1);
    return 0; }