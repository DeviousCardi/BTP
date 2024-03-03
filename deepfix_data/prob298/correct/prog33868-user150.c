#include <stdio.h>
#include <stdlib.h>
long int sum=0;
int catalan(int n) {
    int i;
    if (n==0)
    return 1;
    else {
        for(i=0;i<n;i++)
        sum=sum+catalan(i)*catalan(n-i-1);
        return sum; }
    printf("%ld", sum); }
int main() {
    printf("%d",catalan(1));
	return 0; }