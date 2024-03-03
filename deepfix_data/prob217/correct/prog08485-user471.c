#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int N,S,i,j;
    int arr[N];
    scanf("%d%d",&N,&S,&arr[i],&arr[j]);
for(i=0;i<=N-1;i++)
for(j=i+1;j<=N-1;j++)
if((arr[i]+arr[j])==S)
   printf("%d%d",i,j);
	return 0; }