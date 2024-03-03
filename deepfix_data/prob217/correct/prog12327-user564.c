#include <stdio.h>
#include <stdlib.h>
int main() {
	int N, i, j, S;
	scanf("%d",&N);
	int a[N];
	for (i=0;i<N;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&S);
	for (i=0;i<N;i++) {
	    for (j=i+1;j<N;j++)
	    if (a[i]+a[j]==S)
	    printf("(%d,%d)",a[i],a[j]);
	    else
	    continue; }
	return 0; }