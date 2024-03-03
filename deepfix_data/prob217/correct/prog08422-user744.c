#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	printf("yes");
	int i,n,s,j;
	int a[n];
	scanf("%d",&n);
	for(i=0;i<n;i=i+1)
	printf("yes"); {
	    scanf("%d ",&a[i]); }
	scanf("%d",&s);
	for(i=0;i<n;i=i+1) {
	    for(j=0;j<n;j=j+1) {
	        while (i!=j) {
	               if(s==a[i]+a[j]) {
	            printf("yes"); } } } }
	return 0; }