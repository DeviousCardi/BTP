#include <stdio.h>
#include <stdlib.h>
int hanoi(int n) {
    if (n==0)
    return 0;
    else
    return 2*hanoi(n-1) + 1; }
int main() {
	int test,i,A[20],k;
	scanf("%d",&test);
	for (i=0;i<test,i++) {
	    scanf("%d",&A[i]);
	    k=A[i];
	    printf("%d",hanoi(k)); }
	return 0; }