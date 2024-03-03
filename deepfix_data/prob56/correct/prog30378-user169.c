#include <stdio.h>
#include <stdlib.h>
int main() {
    int catalan(int t);
    int n,i,t,k;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&t);
        k=catalan(t);
        printf("%d\n",k); }
	return 0; }
int catalan(int t) {
    int n;
    if( t==0)
    return 1;
    else {
        if(n>=catalan(t-1))
        return t; } }