#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,u,j;
	int array[n];
	scanf("%d\n",&n);
	for(i=0;i<n;i++) {
	    scanf("%d\n",&array[i]); }
for(j=0;j<n;j++) {
	   if(array[j]<=array[j+1] && array[j]<=array[j-1]) {
	      u=1; }
	 }printf("%d",u);
	 if(u==1) {
	     printf("Yes"); }
	 else {
	     printf("No"); }
	return 0; }