#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
	scanf("%d",&n);
	int i;
	int a[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
		int sum;
	scanf("%d",&sum);
		int j;
	for(i=0;i<n-1;i++) {
	    for(j=i+1;j<n;j++) {
	        if(a[i]+a[j]==sum) {
	            printf("(%d,%d)\n",a[i],a[j]); } } }
	return 0; }