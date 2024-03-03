#include <stdio.h>
#include <stdlib.h>
int main() {
	int i;
	int n=3;
	int a[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<n;i++) {
	    if(a[i]!=a[n-i-1]) {
	        break; }
	    else {
	        continue; }
	    printf("Yes"); }
	return 0; }