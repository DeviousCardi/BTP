#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x==0)
    return 1;
    if(x<0)
    return 0;
    if(m<=0&&x>=0)
    return 0;
    if(memarray[m-1][x]!=-1) {
        return memarray[m-1][x]; }
        memarray[m-1][x]=getways(x,m-1)+getways((x-((2*m)-1)),m);
    return memarray[m-1][x]; }
int main() {
  int n,i,j;
   scanf("%d",&n);
   for(i=0;i<3;i++)
   memarray[i]=(long*)calloc(n+1,sizeof(int));
 for(i=0;i<3;i++)
 for(j=0;j<n+1;j++)
 {memarray[i][j]=-1;}
   printf("%ld",getways(n,3));
       return 0; }