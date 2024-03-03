#include <stdio.h>
#include <stdlib.h>
int fib(int n){
    if(n==0) return 0;
    else if(n==1) return 1;
    else return (fib (n-1)+fib(n-2)); }
int main() {
    scanf("%d\n",t);
    for(i=1;i<=n;i++){
        scanf("%d\n",k);
        printf("%d\n",fib(k)); }
	return 0; }