#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,i,p;
	scanf("%d\n",&n);
	scanf("%d\n",&m);
	int c[n];int d[m];
	for(i=0;i<n;i++) {
	    scanf("%d",&c[i]); }
	scanf("\n");
	for(i=0;i<m;i++) {
	    scanf("%d",&d[i]); }
	scanf("\n");
	int sum[p];
	sum[p]=c[n]+d[m];
	p>=m||p>=n;
	for(i=0;i<p;i++){
	    scanf("%d",&sum[i]);
	    printf("%d",sum[i]); }
	return 0; }