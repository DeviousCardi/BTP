#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,t,e=0,j;
    scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&t);
	for(j=1;j<=t;j++) {
	     scanf("%d",&e);
	 if((a[e]>a[e-1])&&(a[e]>a[e+1]) {
	     printf("Yes\n"); }
	  else {
	      printf("No\n"); } }
	return 0; }