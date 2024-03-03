#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int i,n,s,j,num;
	int a[n];
	scanf("%d",&n);
	for(i=0;i<n;i=i+1) {
	    scanf("%d ",&a[i]); }
	scanf("%d",&s);
	for(i=0;i<n;i=i+1) {
	    num=s-a[i];
	    for(j=0;j<n;j=j+1) {
	        if(num==a[j]) {
	            printf("(%d,%d)\n",a[i],num); } } }
	return 0; }