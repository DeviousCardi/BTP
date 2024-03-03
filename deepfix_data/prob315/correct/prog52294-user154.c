#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k,l=0;
	scanf("%d\n", &n);
	int a[n],count[n];
	for(i=0;i<n;i++) {
	scanf("%d ",&a[i]);
	count[i]=0; }
	int r=0;
	for(j=0;j<n;j++) {
	    for (i=n-1;i>j;i--) {
	        if (a[j]>a[i]) {
	            r++;
	            l++;
	            count[j]=l; } } }
	printf("%d\n",r);
	for(k=0;k<n;k++) {
	    printf("%d ",count[k]); }
	return 0; }