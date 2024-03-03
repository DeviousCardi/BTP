#include <stdio.h>
#include <stdlib.h>
    int fact(int n) {
        if(n==0)
        return 1;
        else
        return n*fact(n-1); }
int c(int n,int r){
    return (fact(n)/(fact(r)*fact(n-r)))/(n+1); }
int main() {
	printf("%d",fact(4));
	return 0; }