#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,t,i,j,k;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) {
	     scanf("%d",&a[i]);
	     printf("\n"); }
	scanf("%d",&t);
	int b[t];
	for(j=0;j<t;j++) {
	     scanf("%d",&b[j]);
	     printf("\n"); }
	for(k=0;k<t;k++) {
	     if((a[b[k]]>a[b[k]+1])&&(a[b[k]]>a[b[k]-1])) {
	        printf("\nYes"); }
	   else [
	        printf("\nNo"); }
	return 0; }