#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,count=0;
	int a[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(i=0,j=1;i<n,j<n;i++,j++) {
	    if((a[i]>a[j])&&(i<j)) {
	        count=count+1; } }
	printf("%d",count);
	return 0; }