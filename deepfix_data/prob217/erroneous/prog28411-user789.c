#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,s,j,i,a[10000];
	scanf("%d\n",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	scanf("\n%d"&s);
	a[0]=p;
	for(i=0;i<n;i++) {
	    for(j=n-1;j>i;j--) {
	        if(a[i]+a[j]=s)
	        printf("%d,%d",a[i],a[j]); } }
	return 0; }