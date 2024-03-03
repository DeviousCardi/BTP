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
    int t, k, A[100], i, m=0;
    scanf("%d\n",&t);
    for (i=0; A[i]!='\0'; i++) {
        scanf("%d\n",&A[i]); }
    for(i=0; i<n; i++) {
        if (catalan(i)==k)
        m++;
        break; }
    if(m==1)
    printf("%d",&catalan(i+1));
	return 0; }