#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[10000];
	int s,n;
	scanf("%d\n",&n);
	for (i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	scanf("\n%d",&s);
	for(i=0;i<n;i++) {
	    t=s-a[i];
	        for(j=1;j>i&&j<n;j++) {
	            if(a[j]==t) {
	                printf("(%d,%d)",a[i],a[j]);
	                continue; }
	            else
	            continue; } }
	return 0; }