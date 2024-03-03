#include <stdio.h>
#include <stdlib.h>
    int fact(int n) {
        if(n==0)
        return 1;
        else
        return n*fact(n-1); }
int c(int n,int r){
    return (fact(2*n)/(fact(r)*fact(2*n-r)))/(n+1); }
int main() {
	printf("%d",c(5,4));
	return 0; }