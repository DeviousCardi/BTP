#include <stdio.h>
#include <stdlib.h>
int main() {
    int N, i, count=1, k=1, l;
    scanf("%d\n", &N);
    int a[N];
    for (i=0; i<N; i++) {
        scanf("%d ", &a[i]); }
    if (N==1) {l=a[0];}
    else {
        for (i=1; i<N; i++) {
            if (a[i-1]==a[i]) {
                count++;
            } else {
                count=1; }
            if (count>=k) {
                k=count;
                l=a[i];
            } else {
                continue; } } }
    printf("%d", l);
	return 0; }