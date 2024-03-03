#include <stdio.h>
#include <stdlib.h>
int main() {
	int array[1000];
	int n;
	scanf("%d\n",&n);
	for(int i=0; i<n; i++) {
	    scanf("%d ",&array[i]); }
	int j,k,count;
	for(j=0; j<n-1; j++) {
	    for(k=j+1; ;k++) {
	        if(array[j] > array[k]) {
	            count++; } } }
	printf("%d",count);
	return 0; }