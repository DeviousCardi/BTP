#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int fib(int n){
    if(n == 1 || n == 0){
        return 0; }
    else return fib(n-1) + fib(n-2); }
int main() {
	int t, i, arr[20];
	scanf("%d", &t);
	for(i=0; i<t; i++) {
	    scanf("%d", &arr[i]);
	    int x = arr[i];
	    printf("%d", fib(x)); }
	return 0; }