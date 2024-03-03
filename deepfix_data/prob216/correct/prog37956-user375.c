#include <stdio.h>
#include <stdlib.h>
int fib(int n){
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return
    fib(n-1)+fib(n-2); }
int main() {
    int t,k,i;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&a[i]);
        printf("%d",fib(a[i]));
        printf("\n"); }
	return 0; }