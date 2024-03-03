#include <stdio.h>
#include <stdlib.h>
int fib(int x) {
    if(x==1)
    return 0;
    if (x==2)
    return 1;
    else
    return fib(x-1)+fib(k-2); }
int main() {
	int t,i,k,f;
	scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d\n",&k);
        f=fib(k);
        printf("%d\n",f); }
	return 0; }