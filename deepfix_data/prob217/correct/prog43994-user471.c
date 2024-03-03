#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int N,S,i=0,j;
    int array[10000];
    scanf("%d%d%d",&N,&array[i],&S);
for(i=0;i<=N-1;i++)
for(j=i+1;j<=N-1;j++)
if((array[i]+array[j])==S)
   printf("%d",(i,j));
	return 0; }