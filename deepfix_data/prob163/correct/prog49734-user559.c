#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,i;
	scanf("%d\n",&n);
	scanf("%d\n",&m);
	char c[n];char d[m];
	for(i=0;i<n;i++) {
	    scanf("%c",&c[i]); }
	scanf("\n");
	for(i=0;i<m;i++) {
	    scanf("%c",&d[m]); }
	printf("%c",c[n]+d[m]);
	return 0; }