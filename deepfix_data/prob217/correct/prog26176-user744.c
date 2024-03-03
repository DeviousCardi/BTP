#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int i,n,s,j;
	int a[n];
	scanf("%d",&n);
	for(i=0;i<n;i=i+1) {
	    scanf("%d ",&a[i]); }
	scanf("%d",&s);
	for(i=0;i<n;i=i+1) {
	    for(j=1;j<n;j=j+1) {
	        if(s=a[i]+a[j]) {
	            printf("(%d,%d)\n",a[i],a[j]); } } }
	return 0; }