#include <stdio.h>
#include <stdlib.h>
int fib(int n){
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else
    return
    fib(n-1)+fib(n-2); }
int main() {
    int t,i,k;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&k);
        if(a[i]>20)
        return 0;
        printf("%d",fib(k));
        printf("\n"); }
	return 0; }