#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a[10000],k,i,out;
	scanf("%d\n",&n);
	for(i=0;i<n;i++) {
	    scanf("%d\n",&a[i]); }
	scanf("%d",&out);
	for(i=0;i<n;i++) {
	    for(k=0;k<n;k++) {
	        if(k!=i) {
	            if(a[k]+a[i]==out) {
	                printf("(%d,%d)\n",a[i],a[k]); } } } }
	return 0; }