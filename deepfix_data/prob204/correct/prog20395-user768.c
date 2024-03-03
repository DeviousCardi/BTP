#include <stdio.h>
#include <stdlib.h>
int main() {
	int i;
	int n=2;
	int a[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<n;i++) {
	    if(a[i]==a[n-1]) {
	        printf("yes"); }
	    else {
	        printf("No"); } }
	return 0; }