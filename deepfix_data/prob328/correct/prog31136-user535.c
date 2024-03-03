#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else
    return (fib(n-1)+fib(n-2)); }
int main() {
    int t,n,i,j;
    scanf("%d\n",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        for(j=0;j<n;j++){
            printf("%d\n",fib(j)); } }
	return 0; }