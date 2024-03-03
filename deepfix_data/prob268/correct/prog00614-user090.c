#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m)
{int count[4],i;
    if(m==1)
 count[0]=1 ;
 if(m==2)
 count[1]=x/3;
 if(m==3)
 count[2]=x/5;
 for(i=0;i<count[1];i++) {
  count[3]=count[3]+(x-3*i)/5 ; }
 return count[2]+count[3]; }
int main() {
    int N,i,add=0,x[3];
    scanf("%d",&N);
    for(i=0;i<3;i++)
    {x[i]=getways(N,3);
    add=add+x[i];}
    return 0; }