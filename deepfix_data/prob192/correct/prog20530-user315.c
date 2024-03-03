#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,i,j,k,n,m;
	scanf("%d",&n);
	m=(n+1)/2;
	for(i=1;i<=m;i++) {
	    for(j=0;j<m-i;j++)
	    {   printf(" "); }
	    for(k=0;k<(2*i-1);k++)
	    {   printf("%c",'*'); }
	    printf("\n"); }
	for(i=m+1;i<n;i++) {
	    for(a=0;a<i-m;a++)
	    {   printf(" "); }
	    for(b=0;b<n-2*(i-m);b++)
	    {   printf("%c",'*'); }
	    printf("\n"); }
	return 0; }