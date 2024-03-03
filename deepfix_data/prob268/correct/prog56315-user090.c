#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m)
{long sum=0,count=0;
  if(sum==x)
  {count=count+1;}
  if(m==1)
 {sum=sum+*memarray[0];
  return getways(x,m);}
  if(m==2)
  {sum=sum+*memarray[0];
  sum=sum+*memarray[1];
  return getways(x,m);}
  if(m==3)
  {sum=sum+*memarray[0];
  sum=sum+*memarray[1];
  sum=sum+*memarray[2];
  return getways(x,m);}
    return count; }
int main() {
    int N,i;
    scanf("%d",&N);
    memarray[0]=1;
    memarray[1]=3;
    memarray[2]=5;
    return 0; }