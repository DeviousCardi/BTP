#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n<=1)
    return n;
    else
    return fib(n-2)+fib(n-1); }
int main() {
    int t,i,j,k[];
    scanf("%d\n",&t);
    for(i=0;i<t;i++) {
        scanf("%d\n",&k[i]); }
    for(i=0;i<t;i++) {
        for(j=0;j<20;j++) {
            if(k[i]==fib(j)
            printf("yes");
            else
            printf("no"); } }
	return 0; }