#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,arr[50];
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&arr[i]); }
	if(arr[0]==1)
	{printf("%d",1); }
	if(arr[i]==arr[i+1])
	printf("%d",i);
	return 0; }