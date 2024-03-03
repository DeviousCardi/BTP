#include <stdio.h>
#include <stdlib.h>
int i;
unsigned catalan(int n) {
    unsigned res = 0;
    if (n <=0) return 1;
    else
    for (i=0; i<n; i++)
        res += catalan(i)*catalan(n-i-1);
    return res; }
int main() {
	 for (i=0; i<10; i++)
    printf("%u ",catalan(i));
	return 0; }