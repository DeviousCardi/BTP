#include <stdio.h>
#include <stdlib.h>
int main() {
    int N, i, r=1, k=1, l;
    scanf("%d\n", &N);
    int a[N];
    for (i=0; i<N; i++) {
        scanf("%d ", &a[i]); }
    for (i=1; i<N; i++) {
        if (a[i-1]==a[i]) {
            r++;
        } else {
            r=1; }
        if (r>k) {
            k=r;
            l=a[i]; } }
    printf("%d", l);
	return 0; }