#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,h,j,k,m;
	scanf("%d",&h);
	scanf("%d",&n);
	m= n - 2*(h-1);
	for(i=1;i<=h;i++) {
	  for(j=i;j<h;j++) {
	  printf(" "); }
	for(k=1;k<=m;k++) {
	    printf("%d",(i+k-1)%10); }
	m=m+2;
	printf("\n"); }
	return 0; }