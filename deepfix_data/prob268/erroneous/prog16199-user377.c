#include <stdio.h>
#include <stdlib.h>
 int n,i;
scanf("%d",&n);
long *memarray[3];
for(i=0;i<3;i++) {
    memarray[i]=(long int*)malloc(n*sizeof(long int)); }
long getways(int x, int m) {
    if(m<0)
      return 1;
  for(int i=0;i<3;i++)
     memarray[i][0]=1;
     if(x-2*m-1>=0)
        memarray[m][x]=getways(m-1,x)+getways(m,x-2*m-1);
     else
        memarray[m][x]=getways(m-1,x); }
int main() {
    long int ans;
    getways(n,2);
    printf("%d",memarray[2][n]);
    return 0; }