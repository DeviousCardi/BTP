#include <stdio.h>
#include <stdlib.h>
int main() {
	char a[502],b[502];
	char c;
	int n,i,k;
	scanf("%c",&c);
	for(k=0;k<502&&c!=EOF;) {
	    a[k]=c;
	    scanf("%c",&c);
	    k=k+1; }
	for(i=k-1;i>=0;i--) {
	    b[k-1]=a[k]; }
	printf("%c %c %c",b[0],b[1],b[2]);
	return 0; }