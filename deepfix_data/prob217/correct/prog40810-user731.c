#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	int s;
	scanf("%d",&s);
	int sum;
	sum=s;
	for(i=0;i<n;i++) {
	   for(j=i;j<n;j++) {
	       if(i!=j) {
	        if(a[i]+a[j]==sum) {
	        printf("(%d,%d)",a[i],a[j]);
	        printf("\n");
	        break; } } } }
	return 0; }