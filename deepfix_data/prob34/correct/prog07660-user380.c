#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,l,n,t;
	int row[n];
	scanf("%d\n",&n);
	for(i=0;i<=n-1;i++)
	scanf("%d\n",&row[n]);
	scanf("%d\n",&t);
	for(l=1;l<=t;l++) {
	scanf("%d\n",&j);
	for(k=0;k<=l-1;k++) {
	    if(row[j]>=row[k])
	    printf("Yes");
	    else
	    printf("No"); } }
	return 0; }