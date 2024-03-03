#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,t,co;
	scanf("%d\n",&n);
	int a[n];
	for(i=0;i<n;i++) {
	    scanf("%d\n",&a[i]); }
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&co); {
	        if(a[co]>a[co+1]&&a[co]>a[co-1])
	         printf("Yes\n");
	        else printf("No\n"); } }
	return 0; }