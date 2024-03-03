#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    if(n==0)
        return 1;
    if(n==1)
        return 1;
    else
        return cat(n-1)*(2*n-1)*(2*n)/n/(n+1) }
int main() {
	int t,k,i,j;
	return 0; }