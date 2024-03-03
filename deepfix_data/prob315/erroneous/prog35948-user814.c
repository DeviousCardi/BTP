#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	int count = 0;
	scanf("%d\n",&n);
	int a[n];
	for(i=0;i<n;i++) {
	    scanf("%d ",&a[i]); }
	for(i=0;i<n;i++) {
	    for(j=i+1;j<n;j++) {
	        if(a[i]>a[j]) {
	          count++; }
	        else
	        continue; }
	    printf("%d ",&count); }
	return 0; }