#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return fib(n-1)+fib(n-2); }
int main() {
    int n,i,j;
    scanf("%d\n",&n);
    int f[n];
    for(i=0;i<n;i++) {
        int a=0;
    scanf("%d\n",&f[i]);
    for(j=0;j<20;j++) {
        if(fib(j)==f[i])
        a++; }
    if(a!=0)
    printf("yes\n");
    else
    printf("no\n"); }
  	return 0; }