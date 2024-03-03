#include <stdio.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++) {
	    scanf("%d ",&arr[i]); }
	for(i=0;i<n;i++) {
	   	for(j=i+1;j<n;j++) {
	   	    if (arr[i]>arr[j]) {
	   	        int a = arr[i];
	   	        arr[i] = arr[j];
	   	        arr[j] = a; } } }
	if(arr[i] == arr[i+1]) {
        printf("YES");
        i++; }
    else
	printf("NO");
	return 0; }