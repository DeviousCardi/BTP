#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	int a[n];
	int flag[n];
	for(i=0;i<n;i++)
	    flag[i]=0;
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	for(i=0;i<n-1;i++) {
	    for(j=i+1;j<n;j++) {
	        flag[i]=flag[i]+(a[i]>a[j]); } }
	int x=0;
	for(i=0;i<n;i++)
	    x=x+flag[i];
	printf("%d\n",x);
	for(i=0;i<n;i++)
	    printf("%d ",flag[i]);
	return 0; }