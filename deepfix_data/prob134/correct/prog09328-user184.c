#include <stdio.h>
#include <stdlib.h>
int C(int n, int k) {
    if(n<k)
    return 0;
    if(k==0)
    return 1;
    return C(n-1, k)+C(n-1, k-1); }
int main() {
	int b;
	scanf("%d", &b);
	if(b<=0)
	printf("-1\n");
	else if(b==1)
	printf("0 0\n");
	else {
	    int i=0, j=0;
	    for(i=0; i<=20; i++) {
	        for(j=0; j<=i/2; j++)
	            if(C(i,j)==b)
	                printf("%d %d\n", i, j); } }
	return 0; }