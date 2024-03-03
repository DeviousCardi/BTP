#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,i,j,sum;
	int  ar1[500],ar2[500];
	char ch;
	scanf("%d",&n);
	scanf("%d",&m);
	for(i=0;i<n;i++) {
	    ch=getchar();
	    ar1[i]=ch-'0';
	    ch=getchar(); }
	for(j=0;j<m;j++)
	ar2[j]=ch-'0';
	ch=getchar();
	sum=ar1[i]+ar2[j];
	printf("%d",sum);
	return 0; }