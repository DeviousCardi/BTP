#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j;
	long long int n,s;
	scanf("%lld\n",&n);
	long long int a[n];
	for(i=0;i<n;i++) {
	    scanf("%lld\n",&a[i]); }
	scanf("%lld\n",&s);
	for(i=0;i<n-1;i++) {
	    for(j=1;j<n-i;j++) {
	        if(a[i]==a[i+j]) {
	            printf("(%lld,%lld)\n",a[i],a[i+j]); }
	        else {
	            continue; } } }
	return 0; }