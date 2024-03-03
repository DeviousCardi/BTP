#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    if(n==0)
        return 1;
    else
        if(n==1)
            return 1;
    else
        if(n==2)
            return 2;
    else
        return 2*(2*n+1)/(n+2)*catalan(n-1); }
int main() {
	printf("%d",catalan(10));
	return 0; }