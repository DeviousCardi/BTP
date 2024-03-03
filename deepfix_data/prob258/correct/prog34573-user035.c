#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	scanf("%d\n",&n);
	int arr[n];
	for(i=0;i<n;i++) {
	    scanf("%d\n",&arr[i]); }
	if(arr[0]>arr[1]||arr[n-1]>arr[n-2]) {
	    printf("Yes\n");
	    return 0; }
	for(i=1;i<(n-1);i++) {
	    if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]) {
	        printf("Yes\n");
	        return 0; } }
	printf("No\n");
	return 0; }