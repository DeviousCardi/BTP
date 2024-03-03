#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n<=1)
    return n;
    else
    return fib(n-1)+fib(n-2); }
int main() {
    int res;
    int t,tmp=0;
    scanf("%d",&t);
    int i;
    int a[20];
    printf("yes");
    for(i=0;i<20;i++) {
        scanf("%d\n",a[i]);
        res=fib(i);
        if(res==a[i]) {
           tmp=1;
           break; } }
    if(tmp==1)
    printf("yes");
    else
    printf("no");
	return 0; }