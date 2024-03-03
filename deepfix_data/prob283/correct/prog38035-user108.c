#include <stdio.h>
#include <stdlib.h>
int ackermann(int m, int n) {
    if (m==0) return n+1;
    else if (m>0&&n==0) return ackermann(m-1, 1);
    else return ackermann(m-1, ackermann(m, n-1)); }
int main() {
	int i, j, k;
	scanf("%d", &k);
	for (i=0; i<=3; i++) {
	    for (j=0; j<=5; j++) {
	        if (ackermann(i,j)==k) {
	            printf("%d %d", i, j);
	            return 0; } } }
	printf("-1");
	return 0; }