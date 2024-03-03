#include <stdio.h>
#include <stdlib.h>
int main() {
    int catalan(int t);
    int n,i,t,k;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&t);
        k=catalan(t);
        printf("%d",k); }
	return 0; }
int catalan(int t) {
    int n,d;
    if(t==0)
    return 1;
    else {
        d=(catalan(t-1));
        n=((2*(2*t-1))/(n+1))*d;
        return n; } }