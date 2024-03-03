#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a[10000],k;
	scanf("%d\n",&n);
	for(i=0;i<n;i++) {
	    scanf("%d\n",&a[i]); }
	for(i=0;i<n;i++) {
	    for(k=0;k<n;k++) {
	        if(k!=i) {
	            if(a[k]+a[i]==n) {
	                printf("(%d,%d)\n",a[k],a[i]); } } } }
	return 0; }