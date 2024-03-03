#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[10000];
	int i, j;
	long int n;
	long int s;
	scanf("%d\n",&n);
	for(i=0; i<n; i++) {
	    scanf("%d\n",&a[i]); }
	scanf("%d\n",&s);
	for(i=0;i<n-1; i++) {
	    for(j=i+1; j<n; j++) {
	        if(a[i] + a[j]==s)
	        printf("(%d,%d)",a[i],a[j]); } }
	return 0; }