#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
                if (n==0)
                return 1;
                else
                return (2*(2*n-1)*catalan(n-1))/n+1;
	return 0; }
int main(){
    int k;
    if (k<=catalan(17))
    printf("yes");
    else
    printf("no"); }