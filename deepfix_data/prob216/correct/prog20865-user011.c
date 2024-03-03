#include <stdio.h>
#include <stdlib.h>
int fib(int n)
{   if(n<=0)
    return 0;
     if(n==1)
    return 1;
    return (fib(n-1)+fib(n-2)); }
int main() {
    int t,i;
    scanf("%d",&t);
    int k[t];
    for(i=0;i<t;i++) {
        scanf("%d",&k[i]); }
    for(i=0;i<t;i++) {
    printf("%d\n",fib(k[i])); }
	return 0; }