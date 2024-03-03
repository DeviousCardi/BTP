#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k,cou=0;
	scanf("%d",&n);
	int a[n],h[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<n;i++) {
	    h[i]=0; }
	for(j=0;j<n-1;j++) {
	    for(k=j+1;k<n;k++) {
	        if(a[j]>a[k])
	        {printf("%d\n%d\n",a[j],a[k]);h[k-1]++;cou++;} } }
	printf("%d\n",cou);
	for(i=0;i<n;i++) {
	    printf("%d ",h[i]); }
	return 0; }