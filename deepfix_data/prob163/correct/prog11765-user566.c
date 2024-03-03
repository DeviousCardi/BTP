#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1,n2,m;char c;
	int d,z,k=0,i,M;
	scanf("%d",&n1);
	scanf("%d",&n2);
	int a[n1];int b[n2];
	for(i=0;i<n1;i++) {
	    scanf("%c",&c);
	    a[i]=(int)c; }
	for(i=0;i<n2;i++) {
	    scanf("%c",&c);
	    b[i]=(int)c;printf("%d",a[i]); }
	return 0; }