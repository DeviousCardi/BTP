#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a[1000],i,j,count;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	   scanf("%d",&a[i]); }
	for(i=0;i<n;i++) {
	    count=0;
	    for(j=i+1;j<n;j++) {
	        if(a[i]>a[j]) {
	            count++; } } }
	printf("%d",count);
	return 0; }