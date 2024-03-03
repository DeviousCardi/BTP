#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,i,j,k;
	scanf("%d%d%d%d",&n,&m,&x,&y);
	int a[n],b[m];
	if(n<m)
	int u[n],v[n];
	else
	int u[m],v[m];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(j=0;j<m;j++)
	scanf("%d",&b[j]);
	for(i=0,j=0;k=0;(i<m)&&(j<n);) {
	    if((b[j]>=a[i]-x)&&(b[j]<=a[i]+y)) {
	        i++;j++;
	        u[k]=i;v[k]=j;k++; }
	    else if(b[j]<a[i]-x)
	    j++;
	    else
	    i++; }
	printf("%d",k+1);
	for(i=0;i<k;i++)
	printf("%d %d",u[k],v[k]);
	return 0; }