#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,i,j;
	scanf("%d",&n);
	int a[n];
	for (m=0;m<n;m++) {
	    scanf("%d",&a[m]); }
	scanf("%d",&sum);
	for(i=0;i<n;i++) {
	    for(j=i;j<n;j++) {
	        if ((a[i]+a[j])==sum) {
	            printf("(%d,%d)",a[i],a[j]); } } }
	return 0; }