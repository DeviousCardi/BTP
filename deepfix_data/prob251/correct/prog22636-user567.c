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
    return (getways(x,m-1)+getways(x-((2*m)-1),m)); }
int main() {
  int n,i;
   scanf("%d",&n);
   for(i=0;i<3;i++)
   memarray[i]=(long*)calloc(n,sizeof(int));
   printf("%ld",getways(n,3));
       return 0; }