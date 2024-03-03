#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,s,a[200];
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&s);
	for(i=0;i<n;i++) {
	    for(j=0;j<n;j++)
	    if(a[i]+a[j]==s)
	    printf("(%d,%d",a[i],a[j]); }
	return 0; }