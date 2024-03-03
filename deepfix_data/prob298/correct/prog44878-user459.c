#include <stdio.h>
#include <stdlib.h>
int i,j;
unsigned catalan(int n) {
    if (n <= 1) return 1;
    unsigned res = 0;
    for (j=0; j<n; j++)
        res += catalan(j)*catalan(n-j-1);
    return res; }
int main() {
	 for (i=1; i<10; i++) {
	     printf("%u ",catalan(i)); }
	return 0; }