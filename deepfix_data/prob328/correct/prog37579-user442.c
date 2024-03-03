#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
	    if(n==0)
	    return 0;
	    if(n==1)
	    return 1;
	    return fib(n-1)+fib(n-2); }
int check(int n) {
    int i;
    for(i=0; i<=20; i++) {
        if(fib(i)==n) {
            return 1; } }
    return 0; }
int main() {
    int t, i;
    scanf("%d",&t);
    int a[t];
    for(i=0; i<t; i++) {
        scanf("%d",&a[i]);
        if(check(a[i]))
        printf("yes\n");
        else
        printf("no\n"); }
	return 0; }