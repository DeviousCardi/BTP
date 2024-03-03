#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    if(n==0)
    return 1;
    else if(n==1)
    return 1;
    else
    return ((2*(2*n-1)*cat(n-1))/(n+1)); }
int main() {
    int n;
    printf("%d",cat(n));
	return 0; }