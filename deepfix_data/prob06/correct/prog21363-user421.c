#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,i,j;
	scanf("%d ",&n);
	scanf("%d ",&m);
	scanf("%d ",&x);
	scanf("%d\n",&y);
	int a[n],b[m],a1[n],b1[m],x1=0;
	for(i=0;i<n;i++)
	scanf("%d ",&a[i]);
	for(i=0;i<m;i++)
	scanf("\n%d ",&b[i]);
	for(i=0;i<n;i++) {
	 for(j=0;j<m;j++) {
	     if((b[j]>=a[i]-x)&&(b[j]<=a[i]+y)) {
	    a1[x1]=i;
	    b1[x1]=j;
	     x1++;
	    b[j]=-100000;
	    break;} } }
	printf("%d\n",x1);
	for(i=0;i<x1;i++)
	printf("%d %d\n",a1[i],b1[i]);
	return 0; }