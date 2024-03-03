#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,t,co;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&co);
	    if(a[co]>a[co+1]&&a[co]>a[co-1]) {
	        printf("Yes"); }
	    else printf("No"); }
	return 0; }