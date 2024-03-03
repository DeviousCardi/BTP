#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    int i;
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    else return fib(n-2)+fib(n-1); }
int main() {
    int t,i;
    int s[100];
    scanf("%d\n",&t);
    for(i=0;i<t;i++) {
        scanf("%d\n",&s[i]); }
    printf("%d",fib(s[i]));
	return 0; }