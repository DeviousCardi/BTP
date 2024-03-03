#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,arr[20],i;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
	    scanf("%d",&arr[i]); }
	for(i=0;i<=arr[i];i++) {
	    if(arr[i]==arr[n-1]) {
	    printf("yes"); }
	if(arr[i+1]==arr[n-2]) {
	    printf("yes"); }
	else
	printf("No"); }
	return 0; }