#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,i,j,a[100],b[100];
	scanf("%d %d %d %d\n",&n,&m,&x,&y);
	for(i=0;i<n-1;i++) {
	    scanf("%d ",&a[i]); }
	scanf("%d\n",a[n-1]);
	for(j=0;j<m-1;j++) {
	    scanf("%d ",b[j]); }
	scanf("%d",a[m-1]);
	return 0; }