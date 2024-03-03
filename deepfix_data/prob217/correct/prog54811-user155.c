#include <stdio.h>
#include <stdlib.h>
int main() {
	long long int n,s,i=0,j=0;
	scanf("%lli",&n);
	long long int a[n];
	for(i=0;i<n;i++) {
	    scanf("%lli",&a[i]); }
	scanf("%lli",&s);
	for(i=0;i<n;i++) {
	    for(j=(n-1);(j>=0)&&(j!=i);j++) {
	        if((a[j]+a[i])==s) {
	            printf("(%lld,%lld)\n",a[j],a[i]); } } }
	return 0; }