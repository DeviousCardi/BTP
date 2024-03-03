#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a[100];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<n;i++) {
	    if(a[i]==a[i+1]) {
	        printf("%d",&a[i]); } }
	return 0; }