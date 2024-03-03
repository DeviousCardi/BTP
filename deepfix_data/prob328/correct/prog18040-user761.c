#include <stdio.h>
#include <stdlib.h>
int fib (int n) {
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    else
    return (fib(n-1)+fib(n-2)); }
int main() {
    int i,j,k,t;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&k);
        for(j=0;j<=20;j++) {
            if(k=fib(j))
            printf("yes"); }
        if(j==21)
        printf("no"); }
	return 0; }