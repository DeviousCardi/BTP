#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k,s;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) {
	        scanf("%d",a[i]); }
	scanf("%d",&s);
	for(j=0;j<(n-1);j++) {
	        for(k=(j+1);k<n;k++) {
	                if(a[j]+a[k]==s) {
	                        printf("(%d,%d)\n"a[j,a[k]]); } } }
	return 0; }