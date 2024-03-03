#include <stdio.h>
#include <stdlib.h>
int main() {
	int N, S, a[N], i, j, k;
	scanf("%d\n",&N);
	for (i=0;i<(N-1);i++) {
	    scanf("%d",&a[i]); }
	scanf("%d\n",&a[N-1]);
	scanf("%d\n",&S);
	for (j=0;2*j<N;j++) {
	    for (k=(j+1);k<N;k++) {
	       if ((a[j]+a[k])==S) printf("(%d,%d)\n",a[j],a[k]); } }
	return 0; }