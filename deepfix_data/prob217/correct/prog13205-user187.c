#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a[10000],s,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	        scanf("%d",&a[i]); }
	 scanf("%d",&s);
	 for(i=0;i<n;i++) {
	        for(j=n;j>i;j--) {
	                    if(n==1) { ; }
	                if((a[j]+a[i])==s) {
	                        printf("(%d,%d)",a[i],a[j]);
	                        printf("\n"); } } }
	return 0; }