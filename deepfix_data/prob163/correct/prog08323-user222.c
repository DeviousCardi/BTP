#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1,n2,i,n,j;
	scanf("%d",&n1);
	scanf("%d",&n2);
	char ar1[n1],ar2[n2],ar3[30],x;
	for(i=0;i<=n1;i++) {
	    scanf("%c",&ar1[i]); }
		for(i=0;i<=n2;i++) {
	    scanf("%c",&ar2[i]); }
		for(i=0;i<=n1;i++) {
	    printf("%c",ar1[i]); }
		for(i=0;i<=n2;i++) {
	    printf("%c",ar2[i]); }
	return 0; }