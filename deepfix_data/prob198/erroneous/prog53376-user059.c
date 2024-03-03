#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[20],b[20],m,n,i,j,c;
	scanf("%d\n",&m);
	scanf("%d\n",&a[0]);
	p=a[0];
	for(i=1;i<m;i++) {
	   scanf("%d\n",&a[i]);
	   if(a[i]<p)
	   p=a[i]; }
	scanf("%d\n",&n);
	scanf("%d\n",&b[0]);
	q=b[0];
	for(j=1;j<n;j++) {
	   scanf("%d\n",&b[i]);
	   if(b[i]<q)
	   q=b[i]; }
	for(j=0;j<n;j++) {
	    if(b[j]==p)
	    c++; }
	if(c==0)
	printf("%d",p);
	else
	printf("NO");
	return 0; }