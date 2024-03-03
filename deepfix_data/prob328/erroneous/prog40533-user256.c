#include <stdio.h>
#include <stdlib.h>
int fib(n) {
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return (fib(n-1)+fib(n-2)); }
int check_fib(a); {
    int i; {
        for(i=0;i<20;i++)
        if(a==fib(i)&&a<fib(i)) {
            return 1; }
        else continue; } }
int main() {
	int b,
	scanf("%d",&b);
	if (check_fib(b)==1) {
	    printf("yes"); }
	else print("no");
	return 0; }