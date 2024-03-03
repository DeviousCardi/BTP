#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, t, j;
	long long int N, S;
	int a[1000];
	scanf("%lld\n",&N);
	for(i=0; i<N; i++) {
	    scanf("%d\n",&a[i]); }
	scanf("%lld\n",&S);
    for(i=0; i<N; i++) {
        for(j=i+1; j<N; j++) {
            if(a[i] + a[j] = S) {
                printf(("%d,%d"),a,b); } } }
	return 0; }