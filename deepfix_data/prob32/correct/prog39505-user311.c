#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	int ar[20];
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("\n%d",&ar[i]); }
	for(i=1;i<n-1;i++) {
	    if(ar[i]<ar[i-1]&&ar[i]<ar[i+1]) {
	        printf("Yes");
	        break; }
	    if(!(ar[i]<ar[i-1]&&ar[i]<ar[i+1]))
	    printf("No"); }
	return 0; }