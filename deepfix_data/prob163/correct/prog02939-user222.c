#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1,n2,i,n,j;
	scanf("%d",&n1);
	scanf("%d",&n2);
	char ar1[n1],ar2[n2],ar3[30];
	for(i=0;i<=n1;i++) {
	    scanf("%c",&ar1[i]); }
		for(i=0;i<=n2;i++) {
	    scanf("%c",&ar2[i]); }
	if(n1>=n2)
	{n=n1;}
	else
	{n=n2;}
	for(i=0;i<=n;i++) {
	        ar3[n-i]=ar1[n-i]+ar2[n-i]; }
	for(i=0;i<=n;i++) {
	    printf("%c",ar3[i]); }
	return 0; }