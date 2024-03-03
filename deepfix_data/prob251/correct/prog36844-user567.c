#include <stdio.h>
#include <stdlib.h>
int n;
long getways(int x, int m,long memarray[][n]) {
    if(x==0)
    return 1;
    if(x<0)
    return 0;
    if(m==1&&x>=0)
    return 1;
    if(x==1&&m>0)
    return 1;
    if(m<=0&&x>=0)
    return 0;
    if(memarray[m-1][x]!=-1) {
        printf("store %d %d is %ld\n",x,m,memarray[m-1][x]);
        return memarray[m-1][x]; }
   memarray[m-1][x]=getways((x-((2*m)-1)),m,memarray)+getways(x,m-1,memarray);
     printf(" %d %d is %ld\n",x,m,memarray[m-1][x]);
    return memarray[m-1][x]; }
int main() {
  int i,j;
   scanf("%d",&n);
long memarray[3][n];
 for(i=0;i<3;i++)
 for(j=0;j<n+1;j++)
 {memarray[i][j]=-1;}
   printf("%ld",getways(n,3,memarray));
       return 0; }