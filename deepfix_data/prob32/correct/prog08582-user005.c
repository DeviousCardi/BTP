#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, a[n], i, j, flag=0;
	scanf("%d", &n);
	if(n<=20)
	for(i=0;i<n;i++) {
	    scanf("%d", &a[i]);
	    for(j=0;j<n;j++) {
	        if(a[i]<=a[j]) {
	            flag=1; } } }
	return 0; }