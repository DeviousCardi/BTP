#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,count=0,arr[n];
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&arr[i]); }
	for(i=0;i<(float)n/2;i++) {
	    if(arr[i]==arr[n-1-i])
	    count=count+1; }
	if(count==(float)n/2)
	printf("YES");
	else
	printf("NO");
	return 0; }