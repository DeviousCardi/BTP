#include <stdio.h>
#include <stdlib.h>
int main() {
	int N, S, a[10000], i, j;
	scanf("%d\n",N);
	for (i=0;i<(N-1);i++) {
	    scanf("%d",&a[i]); }
	scanf("%d\n",&a[N-1]);
	scanf("%d\n",&S);
	return 0; }