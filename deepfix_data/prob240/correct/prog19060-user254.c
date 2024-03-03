#include <stdio.h>
#include <stdlib.h>
long int catalan(int n);
long int catalan(int n) {
    if(n==0) return 1;
    int ans=0;
    ans=catalan(n-1);
    ans=2*(2*n - 1)*(ans)/(n+1);
    return ans; }
int main() {
	return 0; }