#include <stdio.h>
#include <stdlib.h>
int ackermann(int m, int n) {
    if (m==0) return n+1;
    else if (m>0&&n==0) return ackermann(m-1, 1);
    else return ackermann(m-1, ackermann(m, n-1)); }
int main() {
	int i, j, k, r=0;
	scanf("%d", &k);
	for (i=0; i<3; i++) {
	    for (j=0; j<5; j++) {
	        if (ackermann(i,j)==k&&r==0) {
	            printf("%d %d", i, j);
	            r=1; } } }
	if(r==0) {printf("-1");}
	return 0; }