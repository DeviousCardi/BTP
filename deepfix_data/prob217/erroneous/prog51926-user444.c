#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,S;
	int a[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&S);
	for(i=0;i<n-1;i++) {
	    for(j=i+1;j<n;j++) {
	        if(a[i]+a[j]==S) {
	            printf("(%d,%d",a[i],a[j])
	            break; } } }
	return 0; }