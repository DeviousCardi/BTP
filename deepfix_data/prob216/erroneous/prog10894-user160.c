#include <stdio.h>
#include <stdlib.h>
int fibonacci(int fibo[20]; int ind) {
    if(ind==0) {
        return 0;
    } else if (ind==1) {
        return 1;
    } else return (fibonacci(fibo, ind-1)+fibonacci(fibo, ind-2)); }
int main() {
	int i, n, r, fibo[20];
	scanf("%d", &n);
	for(i=0; i<n; i++) {
	    scanf("%d\n", fibonacci(fibo, r)); }
	return 0; }