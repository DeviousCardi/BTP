#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        if(a[i]<0)
        {printf("no");}
        else if(a[i]==0)
        {printf("yes");} }
    int fib(int n) {
        if(n<=1)
        {return n;}
        else
        {return fib(n-1)+fib(n-2);} }
    int is_fib(int n) {
        int x=2;
        while() {
            if(a[i]<fib(x))
            {return 0;}
            else if(a[i]==fib(x))
            {return 1;}
            else } }
	return 0; }