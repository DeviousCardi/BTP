#include <stdio.h>
#include <stdlib.h>
int main() {
	int m,n,x,y,a[100000],b[100000];
	scanf("%d %d %d %d\n",&n, &m, &x, &y);
	int i,j;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(j=0;j<m;j++)
   scanf("%d",&b[j]);
	    for(i=0;i<n;i++){
	    count=0;
	      for(j=i+1;j<n;j++){
if(a[i]-x<=b[j]&&b[j]<=a[i]+y)
	count++; } } }
	printf("%d",count);
	return 0; }