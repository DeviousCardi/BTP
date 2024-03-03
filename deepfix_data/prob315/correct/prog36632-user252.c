#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,a[1000],c[1000],t=0;
	for(i=0;i<n;i++) {
	    c[i]=0; }
	scanf("%d\n",&n);
	for(i=0;i<n;i++) {
	    scanf("%d ",&a[i]); }
	for(i=0;i<n;i++) {
	    for(j=i+1;j<n;j++) {
	        if(a[i]>a[j]) c[i]++; } }
	for(i=0;i<n;i++) {
	    t=t+c[i]; }
	printf("%d\n",t);
	for(i=0;i<n;i++) {
	    if(i==n-1) printf("%d",c[i]);
	    else printf("%d ",c[i]); }
	return 0; }