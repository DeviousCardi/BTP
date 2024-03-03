#include <stdio.h>
#include <stdlib.h>
int main() {
	long long int n,s,i=0,j=0;
	scanf("%lli",&n);
	long long int a[n];
	for(i=0;i<n,i++) {
	    scanf("%lli",&a[i]); }
	scanf("%lli",&s);
	for(i=0;i<n;i++) {
	    for(j=0;j<n;j++) {
	        if((a[i]+a[j])==s) {
	            printf("(%d,%d)\n",a[i],a[j]); }
	        else {
	            continue; } } }
	return 0; }