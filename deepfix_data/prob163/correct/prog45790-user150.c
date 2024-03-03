#include <stdio.h>
#include <stdlib.h>
int main() {
char a[500],b[500],c[600];
	int e,d,i,j=0,k,l,carry=0;
	scanf("%d",&e);
	for(i=1;i<=(e);i++) {
	    scanf("%c",&a[i]); }
	for(i=1;i<=(e);i++){
	a[i]=a[i]-'0';
	    printf("%d",a[i]);}
	return 0;}