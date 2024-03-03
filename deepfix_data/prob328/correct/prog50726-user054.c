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
    int i,k,t,j,temp;
    scanf("%d\n",&t);
    for(i=0;i<t;i++) {
        scanf("%d\n",&k);
        for(j=0;j<=k;j++) {
            temp=0;
            if(fib(j)==k) {
                temp=1;
                break; } }
        if(temp==1)
            printf("yes\n");
        else
            printf("no\n"); }
	return 0; }