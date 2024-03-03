#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, s, i, j;
	scanf("%d", &n);
	int a[10000];
	for(i=0;i<n;i++) {
	    scanf("%d", &a[i]); }
	scanf("%d", &s);
	for(i=0;i<n;i++) {
	    for(j=i+1;j<n; j++)
	    if(s==a[i]+a[j]) {
	        printf("(%d,%d)", a[i], a[j]); } }
	return 0; }