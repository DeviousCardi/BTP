#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,a[2000],na[2000];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	for(i=0;i<n;i++) {
	    na[i]=0;
	    for(j=i;j<n;j++) {
	        if(a[i]>a[j])
	            na[i]++; } }
	for(i=0;i<n;i++)
	    printf("%d ",na[i]);
	return 0; }