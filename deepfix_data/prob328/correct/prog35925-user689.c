#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,l;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        int x=2;
        scanf("%d",&a[i]);
        l=a[i];
        if(l<0){printf("no\n");}
        if(l==0){printf("yes\n");}
        while(l>fib(x)) {
            x++; }
        if(l==fib(x))
        {printf("yes\n");}
        else{printf("no\n");} }
	return 0; }
int fib(int n) {
    if(n<=1)
    {return n;}
    else
    {return fib(n-1)+fib(n-2);} }