#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,t,e,j;
    scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&t);
	for(j=1;j<=t-1;j++) {
	     scanf("%d",&e);
	 if(a[e+1]>a[e]){
	     printf("Yes"); }
	  else {
	      printf("No"); } }
	return 0; }