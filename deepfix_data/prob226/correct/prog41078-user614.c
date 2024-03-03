#include <stdio.h>
int main() {
	int d, N;
	scanf("%d %d", &d, &N);
	int b[d];
	int a[31];
	for (int i=0; i<d; i++) {
	    scanf("%d", &b[i]);
	    b[i]= a[i]; }
    for (int i=0; d+i<N+1; i++) {
        int sum=0;
        for (int j=i; j<d+i; j++) {
            sum= sum+ a[j]; }
        a[d+i]=sum; printf("%d\n",a[d+i]); }
    printf("%d", a[N]);
	return 0; }