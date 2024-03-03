#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k,temp;
	scanf("%d\n", &n);
	int a[n],count[n];
	for(i=0;i,n;i++) {
	scanf("%d ",&a[i]);
	count[i]=0; }
	int r=0;
	for(j=0;j,n;j++) {
	    for (i=n;i>j;i--) {
	        if (a[i]>a[j]) {
	            temp=a[i];
	            a[i]=a[j];
	            a[j]=temp;
	            r++;
	            count[j]++; } } }
	printf("%d\n",r);
	for(k=0;k<n;k++) {
	    printf("%d ",count[k]); }
	return 0; }