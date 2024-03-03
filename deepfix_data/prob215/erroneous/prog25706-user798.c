#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n;
	int sum=0
	scanf("%d",&n);
	for(i=1;i<n;i++) {
	    if(n%i==0) {
	        sum=sum+i; } }
	if(sum==n) {
	   printf("Yes"); }
	else
	    printf("No");
	return 0; }