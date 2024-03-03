#include <stdio.h>
#include <math.h>
int main() {
	int n,i;
	int sum=1;
	scanf("%d",&n);
	for(i=2;i<n;i++) {
	    if(n%i==0) {
	        sum=sum+i; } }
	if(sum==n) {
	    printf("\nYES"); }
	else() {
	    printf("\nNO"); }
	return 0; }