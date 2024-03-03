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
    int i,k,t,j,temp=0;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d\n",&k);
        for(j=0;j<=k;j++) {
            if(fib(j)==k) {
                temp=1; } }
        if(temp==0) {
            printf("yes"); }
        else {
            printf("no"); } }
	return 0; }