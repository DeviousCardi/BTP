#include <stdio.h>
#include <stdlib.h>
    int catalan(int n) {
        if(n==0)
        return 1;
        if(n==1)
        return 1;
        else
        return 2*(2*(n-1)+1)*catalan(n-1)/n+1; }
int main() {
    int t, k=0, j, A[100], i;
    scanf("%d\n",&t);
    for (i=0; i<t; i++) {
        scanf("%d\n",&A[i]); }
    for(j=0; j<t; j++)
    {   k=0;
        while (catalan(k)<A[j]) {
            k++; }
    printf("%d\n",catalan(k+1)); }
	return 0; }