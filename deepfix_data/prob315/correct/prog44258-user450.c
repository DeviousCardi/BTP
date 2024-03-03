#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,x=0;
	scanf("%d",&n);
	int a[n];
	a[n]=0;
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<=n;i++) {
	    for(j=0;j<n-i;j++) {
	   if(a[j+1]>a[j])
	   x++;
	   else
	   a[j+1]=a[j]; } }
	printf("%d",x);
	return 0; }