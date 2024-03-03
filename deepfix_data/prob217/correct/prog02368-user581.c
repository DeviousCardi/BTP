#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,a[10],k,j,s;
	scanf("%d\n",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[n]); }
	scanf("%d\n",&s);
	for(k=0;k<n;k++) {
	for(j=n;j>k;j--) {
	    if (s==(a[j]+a[k]))
	    printf("%d\n",(a[j],a[k])); } }
	return 0; }