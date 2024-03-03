#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,t=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&arr[i]); }
	for(i=1;i<n-1;i++) {
	    if(arr[i-1]<arr[i] && arr[i+1]<arr[i]) {
	        t++; } }
	if(t>0)
	printf("Yes\n");
	else
	printf("No\n");
	return 0; }