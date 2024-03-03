#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, i , j;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&arr[i]); }
	if((n==1)||(arr[n-1]>arr[n-2])) {
	    printf("Yes");
	    return 0; }
	 for (j=1;j<(n-4);j++) {
	     if(arr[j]>arr[j-1] && arr[j]>arr[j+1])
	     { printf("Yes");
	      return 0;} }
	 printf("No");
	return 0; }