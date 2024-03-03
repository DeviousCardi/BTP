#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[21],i,n;
	scanf("%d",&n);
	for (i=0;i<n;i++) {
	     scanf("%d",&a[i]); }
	for (i=0;i<n-2;i++) {
	    if ((a[i+1]>a[i]) && (a[i+1]>a[i+2]))
	    printf("Yes");
	    break; }
	printf("No");
	return 0; }