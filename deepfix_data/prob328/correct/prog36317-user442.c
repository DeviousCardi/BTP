#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
	    if(n==0)
	    return 0;
	    if(n==1)
	    return 1;
	    return fib(n-1)+fib(n-2); }
int check(int n1) {
    int flag=0, i;
    for(i=0; i<=n1; i++) {
        if(fib(i)==n1) {
            flag=1;
            break; } }
    printf("%d",flag);
    if(flag==1)
    return 1;
    return 0; }
int main() {
	int t;
	scanf("%d",&t);
	if(check(t))
	printf("yes");
	else
	printf("no");
	return 0; }