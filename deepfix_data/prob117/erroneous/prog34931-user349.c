#include <stdio.h>
#include <stdlib.h>
int hanoi(int n) {
    if (n==0;)
    return 0;
    else
    return 1+2*hanoi(n-1); }
int main() {
	int t, k;
	scanf("%d", &t);
	while(t!=0) {
	    scanf("%d", &k);
	    printf("%d\n", hanoi(k));
	    t--; }
	return 0; }