#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[20],b[20],m,n,i,j,p,q;
	scanf("%d\n",&m);
	for(i=0;i<m;i++) {
	   scanf("%d\n",&a[i]);
	   if(a[i]<p)
	   p=a[i]; }
	scanf("%d\n",&n);
	for(j=0;j<n;j++) {
	   scanf("%d\n",&b[i]);
	   if(b[i]<q)
	   q=b[i]; }
	printf("%d",p);
	printf("%d",q);
	return 0; }