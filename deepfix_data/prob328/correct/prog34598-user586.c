#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n==1)
	return 0;
	else if(n==2)
	return 1;
	else
	return fib(n-1)+fib(n-2); }
int main() {
    int t,k,count=0,p=0,i;
    scanf("%d",&t);
    while(count<t) {
        scanf("%d",&k);
        for(i=1;i<=20;i++) {
            if(fib(i)==k) {
                p=1;
                printf("yes");
                break; } }
        if(p==0) {
            printf("no"); }
        count++; }
    return 0; }