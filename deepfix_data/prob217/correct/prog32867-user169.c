#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a[50],x,sum,i,j;
	scanf("%d",&n);
	x=getchar();
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	x=getchar();
	scanf("%d",&sum);
	for(i=0;i<(n/2);i++) {
	    for(j=0;j<n;j++) {
	        if((a[i]+a[j])==sum)
	        printf("(%d,%d)\n",a[i],a[j]); } }
	return 0; }