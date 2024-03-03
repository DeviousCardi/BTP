#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<n;i++) {
	    h[i]=0; }
	for(j=0;j<n-1;j++) {
	    for(k=1;k<n;k++) {
	        if(a[j]<a[k])
	        {h[k-1]++;cou++;} } }
	printf("%d\n",cou);
	for(i=0;i<n;i++) {
	    printf("%d ",h[i]); }
	return 0; }