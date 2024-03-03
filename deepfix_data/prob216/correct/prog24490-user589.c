#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int fib(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else
        return fib(n-1) + fib(n-2); }
int main() {
	int t, i, arr[20];
	scanf("%d\n", &t);
	for(i=0; i<t; i++) {
	    scanf("%d\n", &arr[i]);
	    int y = arr[i];
	    printf("%d\n", fib(y-1)); }
	return 0; }