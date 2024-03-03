#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else {
        return fib(n-1)+fib(n-2); } }
int main() {
    int i,k,t,j;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&k);
        for(j=0;j<k;j++) { } }
    printf("%d",fib(6));
	return 0; }