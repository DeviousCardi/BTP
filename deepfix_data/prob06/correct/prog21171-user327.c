#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j=0,n,m,x,y,a[100],b[100],sum=0,c[100],d[100];
	scanf("%d %d %d %d",&n,&m,&x,&y);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<m;j++)
	scanf("%d",&b[i]);
	for(i=0;i<n;i++) {
	        while(j<m) {
	                if(a[i]>=(b[j]-x) && a[i]<=(b[j]+y)) {
	                 c[sum]=a[i];
	                 d[sum]=b[j];
	                 sum++;
	                 j++;
	                 break; }
	                else j++; } }
	printf("%d\n",sum);
	for(i=0;i<sum;i++)
	printf("%d %d\n",c[i],d[i]);
	return 0; }