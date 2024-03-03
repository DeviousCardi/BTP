#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, ch, i=0, j;
	scanf("%d", &n);
	int a[n];
	while (i<n && n<20) {
	    scanf("%d", &a[i]);
	    i++; }
	for (i=2; i<=n-1; i++) {
	    if ((a[i]>a[i-1])&&(a[i]>a[i+1])) {
	        printf("Yes");
	        break; }
	    else if ((a[0]>a[1])||(a[n-1]>a[n-2])) {
	        printf("Yes"); }
	    else printf("No"); }
	return 0; }