#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
	    if(n==0)
	    return 0;
	    if(n==1)
	    return 1;
	    return fib(n-1)+fib(n-2); }
int check(int n1) {
    int i, flag=0;
    for(i=0; i<n1*n1; i++) {
        if(fib(i)==n1) {
            flag=1;
            break; } }
    if(flag==1)
    return 1;
    return 0; }
int main() {
	int t, i;
	scanf("%d",&t);
	int s[t];
	for(i=0; i<t; i++) {
	    scanf("%d",&s[i]);
	    if(check(s[i]))
	    printf("yes\n");
	    else
	    printf("no\n"); }
	return 0; }