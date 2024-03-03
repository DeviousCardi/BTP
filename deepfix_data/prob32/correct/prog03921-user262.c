#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n;
	scanf("%d",&n);
	int a [20];
	for (i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	if ((a[i]<a[i-1] && a[i]<a[i+1])||(a[0]<n && a[0]<a[1])) {
	    printf("Yes"); }
	else {
	    printf("No"); }
	return 0; }