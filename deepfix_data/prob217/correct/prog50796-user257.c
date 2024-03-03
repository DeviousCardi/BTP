#include <stdio.h>
#include <stdlib.h>
int main() {
	int N,i,j,S;
	scanf ("%d\n",&N);
	int a[N];
	for (i=0;i<N;i++) {
	    scanf ("%d",&a[i]); }
	scanf("%d",&S);
	for (i=0;i<N;i++) {
	    for (j=0;j<i;j++) {
            if (a[i]+a[j]==S) {
                printf ("(%d,%d)\n",a[j],a[i]); } } }
	return 0; }