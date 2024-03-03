#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n<=1)
    return n;
    else
    return fib(n-1)+fib(n-2); }
int main() {
    int num,res;
    int t,x,tmp=0;
    scanf("%d",&t);
    int i;
    for(i=0;i<20;i++) {
        scanf("%d",x);
        res=fib(i);
        if(res==x) {
           tmp=1;
           break; } }
    if(tmp==1)
    printf("yes");
    else
    printf("no");
	return 0; }