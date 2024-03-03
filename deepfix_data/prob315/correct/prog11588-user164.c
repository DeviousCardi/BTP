#include <stdio.h>
#include <stdlib.h>
int main() {
	int N;
	scanf("%d",&N);
	int arr[N],tarr[N];
	int i,j,count=0,t=0;
	for(i=0;i<N;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<N;i++) {
	    for(j=(i+1);j<N;j++) {
	      if(arr[i]>arr[j]) {
	          count++;
	          t++; } }
	    tarr[i]=t;
	    t=0; }
	printf("%d\n",count);
	for(i=0;i<N;i++)
	printf("%d ",tarr[i]);
	return 0; }