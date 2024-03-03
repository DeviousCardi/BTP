#include <stdio.h>
#include <stdlib.h> }
long catalan(int n){
    if (n==0)
    return 1;
    else
    if (n==1)
    return 1;
    else
    return catalan(n-1)*((4*n+2)/(n+2)); }
    int main (){
        printf ("%d",catalan(3)); }
	return 0; }