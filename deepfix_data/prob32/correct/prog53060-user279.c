#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n;
	int array[n];
	scanf("%d\n",&n);
	for(i=0;i<n;i++) {
	    scanf("%d\n",&array[i]); {
	       if(array[i]<=array[i+1] && array[i]<=array[i-1]) {
	          printf("Yes"); }
	       else {
	          printf("No"); } } }
	return 0; }