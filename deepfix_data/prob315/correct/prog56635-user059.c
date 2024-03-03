#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a[1000],b[1000],i,j,k,l,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++) {
	    k=0;
	    for(j=i+1;j<n-2;j++) {
	        if(a[i]>a[j]) {
	            k++; } }
	    for(l=0;l<n;l++)
	    b[i]=k; }
	for(l=0;l<n;l++)
	sum=sum+b[i];
	printf("%d",sum);
	for(i=0;i<n;i++)
	printf("%d",b[i]);
	return 0; }