#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y;
	int i,j,count=0;
	int a[20],b[20];
	scanf("%d",&n);
	scanf("%d",&m);
	scanf("%d",&x);
	scanf("%d\n",&m);
	for(i=0;i<n;i++) {
	    scanf("%d\n",&a[i]); }
	for(i=0;i<m;i++) {
	    scanf("%d\n",&b[i]); }
	for(i=0;i<n;i++) {
	    for(j=0;j<m;j++) {
	        if((a[i]-x)<=b[j]<=a[i]-y) }
	    count++; }
	printf("%d",count);
	return 0; }