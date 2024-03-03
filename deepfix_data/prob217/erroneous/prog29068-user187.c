#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a[10000],s;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	        printf("\n");
	        scanf("%d",&a[i]); }
	 printf("\n");
	 scanf("%d",&s);
	 for(i=0;i<n;i++) {
	        for(j=n;j>i;j--) {
	                if((a[j]+a[i])==s) {
	                        printf("(%d,%d)",a[i],a[j]); } } }
	return 0; }