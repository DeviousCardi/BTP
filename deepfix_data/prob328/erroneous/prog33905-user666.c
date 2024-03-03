#include <stdio.h>
#include <stdlib.h>
const int i;
const long fib[22];
    fib[0]=0;
    fib[1]=1;
    for(i=2;i<23;i=i+1) {
        fib[i]=fib[i-1]+fib[i-2]; }
int lookfib(long n) {
    int res=0;
    for(i=0;i<23;i=i+1) {
        if(fib[i]==n){res=1;break;} }
    return res; }
int main() {
	int t;long n;
	for(i=0;i<t;i=i+1) {
	    scanf("%ld",&n);
	    if(lookfib(n)==1){printf("yes\n");}
	    else{printf("no\n");} }
	return 0; }