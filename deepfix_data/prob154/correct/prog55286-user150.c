#include <stdio.h>
#include <stdlib.h>
int main() {
char a[500],b[500],c[600];
	int e,d,i,j=0,k,l,carry=0;
	scanf("%d",&e);
	scanf("%d",&d);
	for(i=0;i<=3;i++) {
	    a[i]=getchar();
	    a[i]=a[i]-'0'; }
	for(i=0;i<=3;i++) {
	 printf("%d",a[i]); }
	return 0; }