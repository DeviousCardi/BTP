#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,a[1000000],b[1000000],k=0,a1[100000],b[100000];
	scanf("%d%d%d%d",&n,&m,&x,&y);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(j=0;j<m;j++)
	scanf("%d",&b[j]);
	for(i=0;i<n;i++) {
	    for(j=k;j<m;j++) {
	        if(b[j]>=a[i]-x&&b[j]<=a[i]+y) {
	            a1[k]=a[i];
	            b1[k]=b[i];
	            k++; } } }
	printf("%d\n",k);
	for(i=0;i<k;i++)
	printf("%d %d\n",a1[k],b1[k]);
	return 0; }