#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,s;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&s);
	for(i=0;i<n;i++) {
	    for(j=0;j<n;j++) {
	            if(i==j)continue;
	            if(i<j) {
	            if(a[i]+a[j]==s) {
	                printf("( %d , %d )",a[i],a[j]);
	                printf("\n"); } } } }
	return 0; }