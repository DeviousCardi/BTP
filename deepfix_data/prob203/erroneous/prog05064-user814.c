#include <stdio.h>
int main() {
	int n,i;
	scanf("%d",n);
	for(i=0;i<n;i++) {
	    scanf("%d ",&arr[i];) }
	int arr[n];
	for(i=0;i<n;i++) {
	   	for(j=i+1;j<n;i++) {
	   	    if (arr[i]>arr[j]) {
	   	        int a = arr[i];
	   	        arr[i] = arr[j];
	   	        arr[j] = a; } } }
	return 0; }