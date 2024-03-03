#include <stdio.h>
#include <stdlib.h>
int catalan (int n) {
    if (n<=1)
    return 1;
    int i,res=0;
    for (i=0;i<n;i++) {
        res=res+catalan(i)*catalan(n-i-1); }
    return res; }
int main() {
    int t;
    scanf ("%d",&t);
    printf ("%d",catalan(t));
	return 0; }