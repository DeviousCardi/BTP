#include <stdio.h>
#include <stdlib.h>
int main() {
    int N,S,i=0,j;
    int array[10000];
    scanf("%d%d%d",&N,&S);
for(i=0;i<=N-1;i++)
for(j=i+1;j<=N-1;j++)
scanf("%d",&array[i]);
if((array[i]+array[j])==S)
   printf("%d%d\n",i,j);
	return 0; }