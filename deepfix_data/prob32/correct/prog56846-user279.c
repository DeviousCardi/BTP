#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n;
	int array[n];
	scanf("%d\n",&n);
	for(i=0;i<n;i++) {
	    scanf("%d\n",&array[n]); } {
	if(n==0) {
	    if(array[n]<array[n+1])
	      printf("Yes");
	    else
	      printf("No"); }
	else {
	   if(array[n]<=array[n+1] && array[n]<=array[n-1]) {
	      printf("Yes\n"); }
	   else {
	      printf("No\n"); } } }
	return 0; }