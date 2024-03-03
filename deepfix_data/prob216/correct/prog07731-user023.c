#include <stdio.h>
#include <stdlib.h>
int main() {
    int t,fib1=0,fib2=1,f,h;
    scanf("%d",&t);
    for(h=0;h<20;h++) {
        if (h<=1)
        f=h;
        else {
            f=fib1+fib2;
            fib1=fib2;
            fib2=f; }
        printf("%d\n",f); }
	return 0; }