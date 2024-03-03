#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m)
{int count[4],i,y=0;
     count[2]=0;
    if(m==1)
 {count[0]=1 ;
 return count[0];}
 if(m==2)
 {count[1]=x/3;
 return count[1];}
 if(m==3) {
   for(i=0;i<count[1];i++) {
   count[2]=count[2]+(x-3*i)/5 ;}
   printf("%d",count[2]);
 }return count[2]; }
int main() {
    int N,i,add=0,x[3];
    scanf("%d",&N);
    for(i=0;i<3;i++)
    {x[i]=getways(N,i+1);
    add=add+x[i];}
    printf("%d",add);
    return 0; }