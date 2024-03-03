#include <stdio.h>
#include <stdlib.h>
int fib(int k){
    if (k==1)
    return 0;
    else if (k==1)
    return 1;
    else
    return fib(k-1)+fib(k-2); }
int main() {
    int t, k, i, out;
    scanf("%d",&t);
    for (i=0;i<t;i++) {
        scanf("%d",&k);
        out= fib(k);
        printf("%d",out); }
	return 0; }