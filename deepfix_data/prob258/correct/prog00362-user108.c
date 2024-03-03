#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, i=0, k=0;
	scanf("%d", &n);
	int a[n];
	while (i<n && n<20) {
	    scanf("%d", &a[i]);
	    i++; }
	for (i=2; i<=n-1; i++) {
	    if (n==1) {
	        k++; }
	    else if ((a[i]>a[i-1])&&(a[i]>a[i+1])) {
	        k++; }
	    else if ((a[0]>a[1])||(a[n-1]>a[n-2])) {
	        k++; } }
	if (k>0) printf("Yes");
	else printf("No");
	return 0; }